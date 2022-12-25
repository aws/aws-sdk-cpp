/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AuthMode.h>
#include <aws/core/utils/DateTime.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Details for an Amazon EMR Studio, including ID, Name, VPC, and Description.
   * The details do not include subnets, IAM roles, security groups, or tags
   * associated with the Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StudioSummary">AWS
   * API Reference</a></p>
   */
  class StudioSummary
  {
  public:
    AWS_EMR_API StudioSummary();
    AWS_EMR_API StudioSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StudioSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline StudioSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline StudioSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Virtual Private Cloud (Amazon VPC) associated with the Amazon
     * EMR Studio.</p>
     */
    inline StudioSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline StudioSummary& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline StudioSummary& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline StudioSummary& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}


    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline StudioSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the Amazon EMR Studio was created.</p>
     */
    inline StudioSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    AuthMode m_authMode;
    bool m_authModeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
