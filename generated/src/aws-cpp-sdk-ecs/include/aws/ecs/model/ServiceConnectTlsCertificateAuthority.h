/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object that represents the Amazon Web Services Private Certificate
   * Authority certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectTlsCertificateAuthority">AWS
   * API Reference</a></p>
   */
  class ServiceConnectTlsCertificateAuthority
  {
  public:
    AWS_ECS_API ServiceConnectTlsCertificateAuthority();
    AWS_ECS_API ServiceConnectTlsCertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTlsCertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline const Aws::String& GetAwsPcaAuthorityArn() const{ return m_awsPcaAuthorityArn; }

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline bool AwsPcaAuthorityArnHasBeenSet() const { return m_awsPcaAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline void SetAwsPcaAuthorityArn(const Aws::String& value) { m_awsPcaAuthorityArnHasBeenSet = true; m_awsPcaAuthorityArn = value; }

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline void SetAwsPcaAuthorityArn(Aws::String&& value) { m_awsPcaAuthorityArnHasBeenSet = true; m_awsPcaAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline void SetAwsPcaAuthorityArn(const char* value) { m_awsPcaAuthorityArnHasBeenSet = true; m_awsPcaAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline ServiceConnectTlsCertificateAuthority& WithAwsPcaAuthorityArn(const Aws::String& value) { SetAwsPcaAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline ServiceConnectTlsCertificateAuthority& WithAwsPcaAuthorityArn(Aws::String&& value) { SetAwsPcaAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services Private Certificate Authority
     * certificate.</p>
     */
    inline ServiceConnectTlsCertificateAuthority& WithAwsPcaAuthorityArn(const char* value) { SetAwsPcaAuthorityArn(value); return *this;}

  private:

    Aws::String m_awsPcaAuthorityArn;
    bool m_awsPcaAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
