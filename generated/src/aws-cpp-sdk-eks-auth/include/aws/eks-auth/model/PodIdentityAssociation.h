/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
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
namespace EKSAuth
{
namespace Model
{

  /**
   * <p>Amazon EKS Pod Identity associations provide the ability to manage
   * credentials for your applications, similar to the way that Amazon EC2 instance
   * profiles provide credentials to Amazon EC2 instances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-auth-2023-11-26/PodIdentityAssociation">AWS
   * API Reference</a></p>
   */
  class PodIdentityAssociation
  {
  public:
    AWS_EKSAUTH_API PodIdentityAssociation();
    AWS_EKSAUTH_API PodIdentityAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API PodIdentityAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline PodIdentityAssociation& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline PodIdentityAssociation& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline PodIdentityAssociation& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline PodIdentityAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline PodIdentityAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline PodIdentityAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

  private:

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
