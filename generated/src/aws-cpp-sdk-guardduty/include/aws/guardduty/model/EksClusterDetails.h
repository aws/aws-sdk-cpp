/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Details about the EKS cluster involved in a Kubernetes finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EksClusterDetails">AWS
   * API Reference</a></p>
   */
  class EksClusterDetails
  {
  public:
    AWS_GUARDDUTY_API EksClusterDetails();
    AWS_GUARDDUTY_API EksClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EksClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>EKS cluster name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>EKS cluster name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>EKS cluster name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>EKS cluster name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>EKS cluster name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>EKS cluster name.</p>
     */
    inline EksClusterDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>EKS cluster name.</p>
     */
    inline EksClusterDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>EKS cluster name.</p>
     */
    inline EksClusterDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>EKS cluster ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline EksClusterDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline EksClusterDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>EKS cluster ARN.</p>
     */
    inline EksClusterDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline EksClusterDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline EksClusterDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID to which the EKS cluster is attached.</p>
     */
    inline EksClusterDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The EKS cluster status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The EKS cluster status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The EKS cluster status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The EKS cluster status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The EKS cluster status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The EKS cluster status.</p>
     */
    inline EksClusterDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The EKS cluster status.</p>
     */
    inline EksClusterDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The EKS cluster status.</p>
     */
    inline EksClusterDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The EKS cluster tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline EksClusterDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline EksClusterDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline EksClusterDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The EKS cluster tags.</p>
     */
    inline EksClusterDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline EksClusterDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the EKS cluster was created.</p>
     */
    inline EksClusterDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
