/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Contains details about a workflow type.</p>
   */
  class AWS_SWF_API DescribeWorkflowTypeResult
  {
  public:
    DescribeWorkflowTypeResult();
    DescribeWorkflowTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkflowTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running.</li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateWorkflowType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new workflow executions of this type.</li> </ul>
     */
    inline const WorkflowTypeInfo& GetTypeInfo() const{ return m_typeInfo; }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running.</li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateWorkflowType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new workflow executions of this type.</li> </ul>
     */
    inline void SetTypeInfo(const WorkflowTypeInfo& value) { m_typeInfo = value; }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running.</li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateWorkflowType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new workflow executions of this type.</li> </ul>
     */
    inline void SetTypeInfo(WorkflowTypeInfo&& value) { m_typeInfo = value; }

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running.</li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateWorkflowType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new workflow executions of this type.</li> </ul>
     */
    inline DescribeWorkflowTypeResult& WithTypeInfo(const WorkflowTypeInfo& value) { SetTypeInfo(value); return *this;}

    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running.</li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateWorkflowType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new workflow executions of this type.</li> </ul>
     */
    inline DescribeWorkflowTypeResult& WithTypeInfo(WorkflowTypeInfo&& value) { SetTypeInfo(value); return *this;}

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a></p>
     */
    inline const WorkflowTypeConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a></p>
     */
    inline void SetConfiguration(const WorkflowTypeConfiguration& value) { m_configuration = value; }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a></p>
     */
    inline void SetConfiguration(WorkflowTypeConfiguration&& value) { m_configuration = value; }

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a></p>
     */
    inline DescribeWorkflowTypeResult& WithConfiguration(const WorkflowTypeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a></p>
     */
    inline DescribeWorkflowTypeResult& WithConfiguration(WorkflowTypeConfiguration&& value) { SetConfiguration(value); return *this;}

  private:
    WorkflowTypeInfo m_typeInfo;
    WorkflowTypeConfiguration m_configuration;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
