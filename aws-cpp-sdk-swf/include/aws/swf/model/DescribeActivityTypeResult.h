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
#include <aws/swf/model/ActivityTypeInfo.h>
#include <aws/swf/model/ActivityTypeConfiguration.h>

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
   * <p>Detailed information about an activity type.</p>
   */
  class AWS_SWF_API DescribeActivityTypeResult
  {
  public:
    DescribeActivityTypeResult();
    DescribeActivityTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeActivityTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running. </li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateActivityType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new tasks of this type. </li> </ul>
     */
    inline const ActivityTypeInfo& GetTypeInfo() const{ return m_typeInfo; }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running. </li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateActivityType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new tasks of this type. </li> </ul>
     */
    inline void SetTypeInfo(const ActivityTypeInfo& value) { m_typeInfo = value; }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running. </li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateActivityType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new tasks of this type. </li> </ul>
     */
    inline void SetTypeInfo(ActivityTypeInfo&& value) { m_typeInfo = value; }

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running. </li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateActivityType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new tasks of this type. </li> </ul>
     */
    inline DescribeActivityTypeResult& WithTypeInfo(const ActivityTypeInfo& value) { SetTypeInfo(value); return *this;}

    /**
     * <p>General information about the activity type.</p> <p>The status of activity
     * type (returned in the ActivityTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <b>REGISTERED</b>: The type is registered and
     * available. Workers supporting this type should be running. </li> <li>
     * <b>DEPRECATED</b>: The type was deprecated using <a>DeprecateActivityType</a>,
     * but is still in use. You should keep workers supporting this type running. You
     * cannot create new tasks of this type. </li> </ul>
     */
    inline DescribeActivityTypeResult& WithTypeInfo(ActivityTypeInfo&& value) { SetTypeInfo(value); return *this;}

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
    inline void SetConfiguration(ActivityTypeConfiguration&& value) { m_configuration = value; }

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline DescribeActivityTypeResult& WithConfiguration(const ActivityTypeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration settings registered with the activity type.</p>
     */
    inline DescribeActivityTypeResult& WithConfiguration(ActivityTypeConfiguration&& value) { SetConfiguration(value); return *this;}

  private:
    ActivityTypeInfo m_typeInfo;
    ActivityTypeConfiguration m_configuration;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
