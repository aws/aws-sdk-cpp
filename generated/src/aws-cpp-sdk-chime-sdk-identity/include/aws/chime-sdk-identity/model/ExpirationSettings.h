/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/ExpirationCriterion.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>Determines the interval after which an <code>AppInstanceUser</code> is
   * automatically deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ExpirationSettings">AWS
   * API Reference</a></p>
   */
  class ExpirationSettings
  {
  public:
    AWS_CHIMESDKIDENTITY_API ExpirationSettings();
    AWS_CHIMESDKIDENTITY_API ExpirationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API ExpirationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period in days after which an <code>AppInstanceUser</code> will be
     * automatically deleted.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }

    /**
     * <p>The period in days after which an <code>AppInstanceUser</code> will be
     * automatically deleted.</p>
     */
    inline bool ExpirationDaysHasBeenSet() const { return m_expirationDaysHasBeenSet; }

    /**
     * <p>The period in days after which an <code>AppInstanceUser</code> will be
     * automatically deleted.</p>
     */
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }

    /**
     * <p>The period in days after which an <code>AppInstanceUser</code> will be
     * automatically deleted.</p>
     */
    inline ExpirationSettings& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}


    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline const ExpirationCriterion& GetExpirationCriterion() const{ return m_expirationCriterion; }

    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline bool ExpirationCriterionHasBeenSet() const { return m_expirationCriterionHasBeenSet; }

    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline void SetExpirationCriterion(const ExpirationCriterion& value) { m_expirationCriterionHasBeenSet = true; m_expirationCriterion = value; }

    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline void SetExpirationCriterion(ExpirationCriterion&& value) { m_expirationCriterionHasBeenSet = true; m_expirationCriterion = std::move(value); }

    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline ExpirationSettings& WithExpirationCriterion(const ExpirationCriterion& value) { SetExpirationCriterion(value); return *this;}

    /**
     * <p>Specifies the conditions under which an <code>AppInstanceUser</code> will
     * expire.</p>
     */
    inline ExpirationSettings& WithExpirationCriterion(ExpirationCriterion&& value) { SetExpirationCriterion(std::move(value)); return *this;}

  private:

    int m_expirationDays;
    bool m_expirationDaysHasBeenSet = false;

    ExpirationCriterion m_expirationCriterion;
    bool m_expirationCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
