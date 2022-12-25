/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about the user who created or modified an experiment, trial,
   * trial component, lineage group, project, or model card.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserContext">AWS
   * API Reference</a></p>
   */
  class UserContext
  {
  public:
    AWS_SAGEMAKER_API UserContext();
    AWS_SAGEMAKER_API UserContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline bool UserProfileArnHasBeenSet() const { return m_userProfileArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline void SetUserProfileArn(const char* value) { m_userProfileArnHasBeenSet = true; m_userProfileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline UserContext& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline UserContext& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline UserContext& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}


    /**
     * <p>The name of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }

    /**
     * <p>The name of the user's profile.</p>
     */
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }

    /**
     * <p>The name of the user's profile.</p>
     */
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }

    /**
     * <p>The name of the user's profile.</p>
     */
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }

    /**
     * <p>The name of the user's profile.</p>
     */
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }

    /**
     * <p>The name of the user's profile.</p>
     */
    inline UserContext& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}

    /**
     * <p>The name of the user's profile.</p>
     */
    inline UserContext& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the user's profile.</p>
     */
    inline UserContext& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}


    /**
     * <p>The domain associated with the user.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain associated with the user.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain associated with the user.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain associated with the user.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain associated with the user.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain associated with the user.</p>
     */
    inline UserContext& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain associated with the user.</p>
     */
    inline UserContext& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain associated with the user.</p>
     */
    inline UserContext& WithDomainId(const char* value) { SetDomainId(value); return *this;}

  private:

    Aws::String m_userProfileArn;
    bool m_userProfileArnHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
