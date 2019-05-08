/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotificationConfiguration.h>
#include <aws/sagemaker/model/MemberDefinition.h>
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
   * <p>Provides details about a labeling work team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Workteam">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Workteam
  {
  public:
    Workteam();
    Workteam(Aws::Utils::Json::JsonView jsonValue);
    Workteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the work team.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }

    /**
     * <p>The name of the work team.</p>
     */
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }

    /**
     * <p>The name of the work team.</p>
     */
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }

    /**
     * <p>The name of the work team.</p>
     */
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }

    /**
     * <p>The name of the work team.</p>
     */
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }

    /**
     * <p>The name of the work team.</p>
     */
    inline Workteam& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}

    /**
     * <p>The name of the work team.</p>
     */
    inline Workteam& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}

    /**
     * <p>The name of the work team.</p>
     */
    inline Workteam& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}


    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const{ return m_memberDefinitions; }

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline void SetMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = value; }

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline void SetMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::move(value); }

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline Workteam& WithMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { SetMemberDefinitions(value); return *this;}

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline Workteam& WithMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { SetMemberDefinitions(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline Workteam& AddMemberDefinitions(const MemberDefinition& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(value); return *this; }

    /**
     * <p>The Amazon Cognito user groups that make up the work team.</p>
     */
    inline Workteam& AddMemberDefinitions(MemberDefinition&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline Workteam& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline Workteam& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the work team.</p>
     */
    inline Workteam& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductListingIds() const{ return m_productListingIds; }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline bool ProductListingIdsHasBeenSet() const { return m_productListingIdsHasBeenSet; }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline void SetProductListingIds(const Aws::Vector<Aws::String>& value) { m_productListingIdsHasBeenSet = true; m_productListingIds = value; }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline void SetProductListingIds(Aws::Vector<Aws::String>&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds = std::move(value); }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline Workteam& WithProductListingIds(const Aws::Vector<Aws::String>& value) { SetProductListingIds(value); return *this;}

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline Workteam& WithProductListingIds(Aws::Vector<Aws::String>&& value) { SetProductListingIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline Workteam& AddProductListingIds(const Aws::String& value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline Workteam& AddProductListingIds(Aws::String&& value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Marketplace identifier for a vendor's work team.</p>
     */
    inline Workteam& AddProductListingIds(const char* value) { m_productListingIdsHasBeenSet = true; m_productListingIds.push_back(value); return *this; }


    /**
     * <p>A description of the work team.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the work team.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline Workteam& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline Workteam& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline Workteam& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline const Aws::String& GetSubDomain() const{ return m_subDomain; }

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline void SetSubDomain(const Aws::String& value) { m_subDomainHasBeenSet = true; m_subDomain = value; }

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline void SetSubDomain(Aws::String&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::move(value); }

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline void SetSubDomain(const char* value) { m_subDomainHasBeenSet = true; m_subDomain.assign(value); }

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline Workteam& WithSubDomain(const Aws::String& value) { SetSubDomain(value); return *this;}

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline Workteam& WithSubDomain(Aws::String&& value) { SetSubDomain(std::move(value)); return *this;}

    /**
     * <p>The URI of the labeling job's user interface. Workers open this URI to start
     * labeling your data objects.</p>
     */
    inline Workteam& WithSubDomain(const char* value) { SetSubDomain(value); return *this;}


    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline Workteam& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the work team was created (timestamp).</p>
     */
    inline Workteam& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline Workteam& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that the work team was last updated (timestamp).</p>
     */
    inline Workteam& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    
    inline Workteam& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    
    inline Workteam& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet;

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    Aws::Vector<Aws::String> m_productListingIds;
    bool m_productListingIdsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_subDomain;
    bool m_subDomainHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
