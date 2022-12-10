/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingAction">AWS
   * API Reference</a></p>
   */
  class FindingAction
  {
  public:
    AWS_MACIE2_API FindingAction();
    AWS_MACIE2_API FindingAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FindingAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline const ApiCallDetails& GetApiCallDetails() const{ return m_apiCallDetails; }

    /**
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline bool ApiCallDetailsHasBeenSet() const { return m_apiCallDetailsHasBeenSet; }

    /**
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline void SetApiCallDetails(const ApiCallDetails& value) { m_apiCallDetailsHasBeenSet = true; m_apiCallDetails = value; }

    /**
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline void SetApiCallDetails(ApiCallDetails&& value) { m_apiCallDetailsHasBeenSet = true; m_apiCallDetails = std::move(value); }

    /**
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline FindingAction& WithApiCallDetails(const ApiCallDetails& value) { SetApiCallDetails(value); return *this;}

    /**
     * <p>The invocation details of the API operation that an entity invoked for the
     * affected resource, if the value for the actionType property is AWS_API_CALL.</p>
     */
    inline FindingAction& WithApiCallDetails(ApiCallDetails&& value) { SetApiCallDetails(std::move(value)); return *this;}

  private:

    FindingActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    ApiCallDetails m_apiCallDetails;
    bool m_apiCallDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
