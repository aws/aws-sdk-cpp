/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowTypeInfo.h>
#include <aws/swf/model/WorkflowTypeConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains details about a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DescribeWorkflowTypeResult
  {
  public:
    DescribeWorkflowTypeResult();
    DescribeWorkflowTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkflowTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline const WorkflowTypeInfo& GetTypeInfo() const{ return m_typeInfo; }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline void SetTypeInfo(const WorkflowTypeInfo& value) { m_typeInfo = value; }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline void SetTypeInfo(WorkflowTypeInfo&& value) { m_typeInfo = std::move(value); }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline DescribeWorkflowTypeResult& WithTypeInfo(const WorkflowTypeInfo& value) { SetTypeInfo(value); return *this;}

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline DescribeWorkflowTypeResult& WithTypeInfo(WorkflowTypeInfo&& value) { SetTypeInfo(std::move(value)); return *this;}


    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline const WorkflowTypeConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline void SetConfiguration(const WorkflowTypeConfiguration& value) { m_configuration = value; }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline void SetConfiguration(WorkflowTypeConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline DescribeWorkflowTypeResult& WithConfiguration(const WorkflowTypeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline DescribeWorkflowTypeResult& WithConfiguration(WorkflowTypeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    WorkflowTypeInfo m_typeInfo;

    WorkflowTypeConfiguration m_configuration;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
