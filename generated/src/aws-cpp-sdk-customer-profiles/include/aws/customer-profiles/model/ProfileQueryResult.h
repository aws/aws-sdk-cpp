/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/QueryResult.h>
#include <aws/customer-profiles/model/Profile.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that holds the results for membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ProfileQueryResult">AWS
   * API Reference</a></p>
   */
  class ProfileQueryResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ProfileQueryResult() = default;
    AWS_CUSTOMERPROFILES_API ProfileQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile id the result belongs to.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    ProfileQueryResult& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the profile was absent or present in the segment.</p>
     */
    inline QueryResult GetQueryResult() const { return m_queryResult; }
    inline bool QueryResultHasBeenSet() const { return m_queryResultHasBeenSet; }
    inline void SetQueryResult(QueryResult value) { m_queryResultHasBeenSet = true; m_queryResult = value; }
    inline ProfileQueryResult& WithQueryResult(QueryResult value) { SetQueryResult(value); return *this;}
    ///@}

    ///@{
    
    inline const Profile& GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    template<typename ProfileT = Profile>
    void SetProfile(ProfileT&& value) { m_profileHasBeenSet = true; m_profile = std::forward<ProfileT>(value); }
    template<typename ProfileT = Profile>
    ProfileQueryResult& WithProfile(ProfileT&& value) { SetProfile(std::forward<ProfileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    QueryResult m_queryResult{QueryResult::NOT_SET};
    bool m_queryResultHasBeenSet = false;

    Profile m_profile;
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
