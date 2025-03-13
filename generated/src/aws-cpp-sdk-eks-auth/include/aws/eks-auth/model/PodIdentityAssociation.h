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
    AWS_EKSAUTH_API PodIdentityAssociation() = default;
    AWS_EKSAUTH_API PodIdentityAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API PodIdentityAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the EKS Pod Identity association.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    PodIdentityAssociation& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    PodIdentityAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
