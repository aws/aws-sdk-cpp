/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/Identity.h>
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
   * <p>Summary of the details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceAdminSummary">AWS
   * API Reference</a></p>
   */
  class AppInstanceAdminSummary
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceAdminSummary();
    AWS_CHIMESDKIDENTITY_API AppInstanceAdminSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceAdminSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline const Identity& GetAdmin() const{ return m_admin; }

    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }

    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline void SetAdmin(const Identity& value) { m_adminHasBeenSet = true; m_admin = value; }

    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline void SetAdmin(Identity&& value) { m_adminHasBeenSet = true; m_admin = std::move(value); }

    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline AppInstanceAdminSummary& WithAdmin(const Identity& value) { SetAdmin(value); return *this;}

    /**
     * <p>The details of the <code>AppInstanceAdmin</code>.</p>
     */
    inline AppInstanceAdminSummary& WithAdmin(Identity&& value) { SetAdmin(std::move(value)); return *this;}

  private:

    Identity m_admin;
    bool m_adminHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
