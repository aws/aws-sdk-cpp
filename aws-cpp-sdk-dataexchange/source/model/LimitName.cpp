/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LimitName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace LimitNameMapper
      {

        static const int Products_per_account_HASH = HashingUtils::HashString("Products per account");
        static const int Data_sets_per_account_HASH = HashingUtils::HashString("Data sets per account");
        static const int Data_sets_per_product_HASH = HashingUtils::HashString("Data sets per product");
        static const int Revisions_per_data_set_HASH = HashingUtils::HashString("Revisions per data set");
        static const int Assets_per_revision_HASH = HashingUtils::HashString("Assets per revision");
        static const int Assets_per_import_job_from_Amazon_S3_HASH = HashingUtils::HashString("Assets per import job from Amazon S3");
        static const int Asset_per_export_job_from_Amazon_S3_HASH = HashingUtils::HashString("Asset per export job from Amazon S3");
        static const int Asset_size_in_GB_HASH = HashingUtils::HashString("Asset size in GB");
        static const int Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3_HASH = HashingUtils::HashString("Concurrent in progress jobs to export assets to Amazon S3");
        static const int Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL_HASH = HashingUtils::HashString("Concurrent in progress jobs to export assets to a signed URL");
        static const int Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3_HASH = HashingUtils::HashString("Concurrent in progress jobs to import assets from Amazon S3");
        static const int Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL_HASH = HashingUtils::HashString("Concurrent in progress jobs to import assets from a signed URL");
        static const int Concurrent_in_progress_jobs_to_export_revisions_to_Amazon_S3_HASH = HashingUtils::HashString("Concurrent in progress jobs to export revisions to Amazon S3");
        static const int Event_actions_per_account_HASH = HashingUtils::HashString("Event actions per account");
        static const int Auto_export_event_actions_per_data_set_HASH = HashingUtils::HashString("Auto export event actions per data set");
        static const int Amazon_Redshift_datashare_assets_per_import_job_from_Redshift_HASH = HashingUtils::HashString("Amazon Redshift datashare assets per import job from Redshift");
        static const int Concurrent_in_progress_jobs_to_import_assets_from_Amazon_Redshift_datashares_HASH = HashingUtils::HashString("Concurrent in progress jobs to import assets from Amazon Redshift datashares");
        static const int Revisions_per_Amazon_Redshift_datashare_data_set_HASH = HashingUtils::HashString("Revisions per Amazon Redshift datashare data set");
        static const int Amazon_Redshift_datashare_assets_per_revision_HASH = HashingUtils::HashString("Amazon Redshift datashare assets per revision");
        static const int Concurrent_in_progress_jobs_to_import_assets_from_an_API_Gateway_API_HASH = HashingUtils::HashString("Concurrent in progress jobs to import assets from an API Gateway API");
        static const int Amazon_API_Gateway_API_assets_per_revision_HASH = HashingUtils::HashString("Amazon API Gateway API assets per revision");
        static const int Revisions_per_Amazon_API_Gateway_API_data_set_HASH = HashingUtils::HashString("Revisions per Amazon API Gateway API data set");
        static const int Concurrent_in_progress_jobs_to_import_assets_from_an_AWS_Lake_Formation_tag_policy_HASH = HashingUtils::HashString("Concurrent in progress jobs to import assets from an AWS Lake Formation tag policy");
        static const int AWS_Lake_Formation_data_permission_assets_per_revision_HASH = HashingUtils::HashString("AWS Lake Formation data permission assets per revision");
        static const int Revisions_per_AWS_Lake_Formation_data_permission_data_set_HASH = HashingUtils::HashString("Revisions per AWS Lake Formation data permission data set");
        static const int Revisions_per_Amazon_S3_data_access_data_set_HASH = HashingUtils::HashString("Revisions per Amazon S3 data access data set");
        static const int Amazon_S3_data_access_assets_per_revision_HASH = HashingUtils::HashString("Amazon S3 data access assets per revision");
        static const int Concurrent_in_progress_jobs_to_create_Amazon_S3_data_access_assets_from_S3_buckets_HASH = HashingUtils::HashString("Concurrent in progress jobs to create Amazon S3 data access assets from S3 buckets");


        LimitName GetLimitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Products_per_account_HASH)
          {
            return LimitName::Products_per_account;
          }
          else if (hashCode == Data_sets_per_account_HASH)
          {
            return LimitName::Data_sets_per_account;
          }
          else if (hashCode == Data_sets_per_product_HASH)
          {
            return LimitName::Data_sets_per_product;
          }
          else if (hashCode == Revisions_per_data_set_HASH)
          {
            return LimitName::Revisions_per_data_set;
          }
          else if (hashCode == Assets_per_revision_HASH)
          {
            return LimitName::Assets_per_revision;
          }
          else if (hashCode == Assets_per_import_job_from_Amazon_S3_HASH)
          {
            return LimitName::Assets_per_import_job_from_Amazon_S3;
          }
          else if (hashCode == Asset_per_export_job_from_Amazon_S3_HASH)
          {
            return LimitName::Asset_per_export_job_from_Amazon_S3;
          }
          else if (hashCode == Asset_size_in_GB_HASH)
          {
            return LimitName::Asset_size_in_GB;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_export_revisions_to_Amazon_S3_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_export_revisions_to_Amazon_S3;
          }
          else if (hashCode == Event_actions_per_account_HASH)
          {
            return LimitName::Event_actions_per_account;
          }
          else if (hashCode == Auto_export_event_actions_per_data_set_HASH)
          {
            return LimitName::Auto_export_event_actions_per_data_set;
          }
          else if (hashCode == Amazon_Redshift_datashare_assets_per_import_job_from_Redshift_HASH)
          {
            return LimitName::Amazon_Redshift_datashare_assets_per_import_job_from_Redshift;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_import_assets_from_Amazon_Redshift_datashares_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_import_assets_from_Amazon_Redshift_datashares;
          }
          else if (hashCode == Revisions_per_Amazon_Redshift_datashare_data_set_HASH)
          {
            return LimitName::Revisions_per_Amazon_Redshift_datashare_data_set;
          }
          else if (hashCode == Amazon_Redshift_datashare_assets_per_revision_HASH)
          {
            return LimitName::Amazon_Redshift_datashare_assets_per_revision;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_import_assets_from_an_API_Gateway_API_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_import_assets_from_an_API_Gateway_API;
          }
          else if (hashCode == Amazon_API_Gateway_API_assets_per_revision_HASH)
          {
            return LimitName::Amazon_API_Gateway_API_assets_per_revision;
          }
          else if (hashCode == Revisions_per_Amazon_API_Gateway_API_data_set_HASH)
          {
            return LimitName::Revisions_per_Amazon_API_Gateway_API_data_set;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_import_assets_from_an_AWS_Lake_Formation_tag_policy_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_import_assets_from_an_AWS_Lake_Formation_tag_policy;
          }
          else if (hashCode == AWS_Lake_Formation_data_permission_assets_per_revision_HASH)
          {
            return LimitName::AWS_Lake_Formation_data_permission_assets_per_revision;
          }
          else if (hashCode == Revisions_per_AWS_Lake_Formation_data_permission_data_set_HASH)
          {
            return LimitName::Revisions_per_AWS_Lake_Formation_data_permission_data_set;
          }
          else if (hashCode == Revisions_per_Amazon_S3_data_access_data_set_HASH)
          {
            return LimitName::Revisions_per_Amazon_S3_data_access_data_set;
          }
          else if (hashCode == Amazon_S3_data_access_assets_per_revision_HASH)
          {
            return LimitName::Amazon_S3_data_access_assets_per_revision;
          }
          else if (hashCode == Concurrent_in_progress_jobs_to_create_Amazon_S3_data_access_assets_from_S3_buckets_HASH)
          {
            return LimitName::Concurrent_in_progress_jobs_to_create_Amazon_S3_data_access_assets_from_S3_buckets;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LimitName>(hashCode);
          }

          return LimitName::NOT_SET;
        }

        Aws::String GetNameForLimitName(LimitName enumValue)
        {
          switch(enumValue)
          {
          case LimitName::Products_per_account:
            return "Products per account";
          case LimitName::Data_sets_per_account:
            return "Data sets per account";
          case LimitName::Data_sets_per_product:
            return "Data sets per product";
          case LimitName::Revisions_per_data_set:
            return "Revisions per data set";
          case LimitName::Assets_per_revision:
            return "Assets per revision";
          case LimitName::Assets_per_import_job_from_Amazon_S3:
            return "Assets per import job from Amazon S3";
          case LimitName::Asset_per_export_job_from_Amazon_S3:
            return "Asset per export job from Amazon S3";
          case LimitName::Asset_size_in_GB:
            return "Asset size in GB";
          case LimitName::Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3:
            return "Concurrent in progress jobs to export assets to Amazon S3";
          case LimitName::Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL:
            return "Concurrent in progress jobs to export assets to a signed URL";
          case LimitName::Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3:
            return "Concurrent in progress jobs to import assets from Amazon S3";
          case LimitName::Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL:
            return "Concurrent in progress jobs to import assets from a signed URL";
          case LimitName::Concurrent_in_progress_jobs_to_export_revisions_to_Amazon_S3:
            return "Concurrent in progress jobs to export revisions to Amazon S3";
          case LimitName::Event_actions_per_account:
            return "Event actions per account";
          case LimitName::Auto_export_event_actions_per_data_set:
            return "Auto export event actions per data set";
          case LimitName::Amazon_Redshift_datashare_assets_per_import_job_from_Redshift:
            return "Amazon Redshift datashare assets per import job from Redshift";
          case LimitName::Concurrent_in_progress_jobs_to_import_assets_from_Amazon_Redshift_datashares:
            return "Concurrent in progress jobs to import assets from Amazon Redshift datashares";
          case LimitName::Revisions_per_Amazon_Redshift_datashare_data_set:
            return "Revisions per Amazon Redshift datashare data set";
          case LimitName::Amazon_Redshift_datashare_assets_per_revision:
            return "Amazon Redshift datashare assets per revision";
          case LimitName::Concurrent_in_progress_jobs_to_import_assets_from_an_API_Gateway_API:
            return "Concurrent in progress jobs to import assets from an API Gateway API";
          case LimitName::Amazon_API_Gateway_API_assets_per_revision:
            return "Amazon API Gateway API assets per revision";
          case LimitName::Revisions_per_Amazon_API_Gateway_API_data_set:
            return "Revisions per Amazon API Gateway API data set";
          case LimitName::Concurrent_in_progress_jobs_to_import_assets_from_an_AWS_Lake_Formation_tag_policy:
            return "Concurrent in progress jobs to import assets from an AWS Lake Formation tag policy";
          case LimitName::AWS_Lake_Formation_data_permission_assets_per_revision:
            return "AWS Lake Formation data permission assets per revision";
          case LimitName::Revisions_per_AWS_Lake_Formation_data_permission_data_set:
            return "Revisions per AWS Lake Formation data permission data set";
          case LimitName::Revisions_per_Amazon_S3_data_access_data_set:
            return "Revisions per Amazon S3 data access data set";
          case LimitName::Amazon_S3_data_access_assets_per_revision:
            return "Amazon S3 data access assets per revision";
          case LimitName::Concurrent_in_progress_jobs_to_create_Amazon_S3_data_access_assets_from_S3_buckets:
            return "Concurrent in progress jobs to create Amazon S3 data access assets from S3 buckets";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LimitNameMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
