/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/FreeTierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/LanguageCode.h>
#include <utility>

namespace Aws
{
namespace FreeTier
{
namespace Model
{

  /**
   */
  class GetAccountActivityRequest : public FreeTierRequest
  {
  public:
    AWS_FREETIER_API GetAccountActivityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountActivity"; }

    AWS_FREETIER_API Aws::String SerializePayload() const override;

    AWS_FREETIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> A unique identifier that identifies the activity. </p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    GetAccountActivityRequest& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language code used to return translated title and description fields.
     * </p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline GetAccountActivityRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}
  private:

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
