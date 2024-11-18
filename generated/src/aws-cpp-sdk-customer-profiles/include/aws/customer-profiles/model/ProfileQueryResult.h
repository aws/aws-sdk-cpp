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
    AWS_CUSTOMERPROFILES_API ProfileQueryResult();
    AWS_CUSTOMERPROFILES_API ProfileQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile id the result belongs to.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ProfileQueryResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ProfileQueryResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ProfileQueryResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the profile was absent or present in the segment.</p>
     */
    inline const QueryResult& GetQueryResult() const{ return m_queryResult; }
    inline bool QueryResultHasBeenSet() const { return m_queryResultHasBeenSet; }
    inline void SetQueryResult(const QueryResult& value) { m_queryResultHasBeenSet = true; m_queryResult = value; }
    inline void SetQueryResult(QueryResult&& value) { m_queryResultHasBeenSet = true; m_queryResult = std::move(value); }
    inline ProfileQueryResult& WithQueryResult(const QueryResult& value) { SetQueryResult(value); return *this;}
    inline ProfileQueryResult& WithQueryResult(QueryResult&& value) { SetQueryResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Profile& GetProfile() const{ return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(const Profile& value) { m_profileHasBeenSet = true; m_profile = value; }
    inline void SetProfile(Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }
    inline ProfileQueryResult& WithProfile(const Profile& value) { SetProfile(value); return *this;}
    inline ProfileQueryResult& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    QueryResult m_queryResult;
    bool m_queryResultHasBeenSet = false;

    Profile m_profile;
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
