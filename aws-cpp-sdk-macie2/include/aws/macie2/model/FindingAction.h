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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/FindingActionType.h>
#include <aws/macie2/model/ApiCallDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an action that occurred for a resource and
   * produced a policy finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/FindingAction">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API FindingAction
  {
  public:
    FindingAction();
    FindingAction(Aws::Utils::Json::JsonView jsonValue);
    FindingAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline const FindingActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline void SetActionType(const FindingActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline void SetActionType(FindingActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline FindingAction& WithActionType(const FindingActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action that occurred for the affected resource. This value is
     * typically AWS_API_CALL, which indicates that an entity invoked an API operation
     * for the resource.</p>
     */
    inline FindingAction& WithActionType(FindingActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline const ApiCallDetails& GetApiCallDetails() const{ return m_apiCallDetails; }

    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline bool ApiCallDetailsHasBeenSet() const { return m_apiCallDetailsHasBeenSet; }

    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline void SetApiCallDetails(const ApiCallDetails& value) { m_apiCallDetailsHasBeenSet = true; m_apiCallDetails = value; }

    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline void SetApiCallDetails(ApiCallDetails&& value) { m_apiCallDetailsHasBeenSet = true; m_apiCallDetails = std::move(value); }

    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline FindingAction& WithApiCallDetails(const ApiCallDetails& value) { SetApiCallDetails(value); return *this;}

    /**
     * <p>For the affected resource:</p> <ul><li><p>The name of the operation that was
     * invoked most recently and produced the finding (api).</p></li> <li><p>The first
     * date and time when any operation was invoked and produced the finding
     * (firstSeen).</p></li> <li><p>The most recent date and time when the specified
     * operation was invoked and produced the finding (lastSeen).</p></li></ul> <p>All
     * date and time values are in UTC and extended ISO 8601 format.</p>
     */
    inline FindingAction& WithApiCallDetails(ApiCallDetails&& value) { SetApiCallDetails(std::move(value)); return *this;}

  private:

    FindingActionType m_actionType;
    bool m_actionTypeHasBeenSet;

    ApiCallDetails m_apiCallDetails;
    bool m_apiCallDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
