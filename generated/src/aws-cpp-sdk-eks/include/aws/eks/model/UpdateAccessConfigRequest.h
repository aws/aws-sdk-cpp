/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AuthenticationMode.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The access configuration information for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateAccessConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAccessConfigRequest
  {
  public:
    AWS_EKS_API UpdateAccessConfigRequest();
    AWS_EKS_API UpdateAccessConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpdateAccessConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }

    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }

    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }

    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }

    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline UpdateAccessConfigRequest& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}

    /**
     * <p>The desired authentication mode for the cluster.</p>
     */
    inline UpdateAccessConfigRequest& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}

  private:

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
