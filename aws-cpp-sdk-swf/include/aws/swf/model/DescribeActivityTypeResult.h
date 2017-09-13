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
#include <aws/swf/model/ActivityTypeInfo.h>
#include <aws/swf/model/ActivityTypeConfiguration.h>
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
   * <p>Detailed information about an activity type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DescribeActivityTypeResult
  {
  public:
    DescribeActivityTypeResult();
    DescribeActivityTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeActivityTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline const ActivityTypeInfo& GetTypeInfo() const{ return m_typeInfo; }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline void SetTypeInfo(const ActivityTypeInfo& value) { m_typeInfo = value; }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline void SetTypeInfo(ActivityTypeInfo&& value) { m_typeInfo = std::move(value); }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline DescribeActivityTypeResult& WithTypeInfo(const ActivityTypeInfo& value) { SetTypeInfo(value); return *this;}

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running. </p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateActivityType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new tasks of this type. </p>
     * </li> </ul>
     */
    inline DescribeActivityTypeResult& WithTypeInfo(ActivityTypeInfo&& value) { SetTypeInfo(std::move(value)); return *this;}


    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline const ActivityTypeConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline void SetConfiguration(const ActivityTypeConfiguration& value) { m_configuration = value; }

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline void SetConfiguration(ActivityTypeConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline DescribeActivityTypeResult& WithConfiguration(const ActivityTypeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline DescribeActivityTypeResult& WithConfiguration(ActivityTypeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    ActivityTypeInfo m_typeInfo;

    ActivityTypeConfiguration m_configuration;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
