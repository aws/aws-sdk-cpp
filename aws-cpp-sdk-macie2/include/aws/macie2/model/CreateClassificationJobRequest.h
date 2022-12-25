/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobType.h>
#include <aws/macie2/model/ManagedDataIdentifierSelector.h>
#include <aws/macie2/model/S3JobDefinition.h>
#include <aws/macie2/model/JobScheduleFrequency.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class CreateClassificationJobRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API CreateClassificationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClassificationJob"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const{ return m_allowListIds; }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline bool AllowListIdsHasBeenSet() const { return m_allowListIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline void SetAllowListIds(const Aws::Vector<Aws::String>& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = value; }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline void SetAllowListIds(Aws::Vector<Aws::String>&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline CreateClassificationJobRequest& WithAllowListIds(const Aws::Vector<Aws::String>& value) { SetAllowListIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline CreateClassificationJobRequest& WithAllowListIds(Aws::Vector<Aws::String>&& value) { SetAllowListIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline CreateClassificationJobRequest& AddAllowListIds(const Aws::String& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline CreateClassificationJobRequest& AddAllowListIds(Aws::String&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline CreateClassificationJobRequest& AddAllowListIds(const char* value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateClassificationJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateClassificationJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateClassificationJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const{ return m_customDataIdentifierIds; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline bool CustomDataIdentifierIdsHasBeenSet() const { return m_customDataIdentifierIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline void SetCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = value; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline void SetCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline CreateClassificationJobRequest& WithCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetCustomDataIdentifierIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline CreateClassificationJobRequest& WithCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetCustomDataIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline CreateClassificationJobRequest& AddCustomDataIdentifierIds(const Aws::String& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline CreateClassificationJobRequest& AddCustomDataIdentifierIds(Aws::String&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline CreateClassificationJobRequest& AddCustomDataIdentifierIds(const char* value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(value); return *this; }


    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>For a recurring job, specifies whether to analyze all existing, eligible
     * objects immediately after the job is created (true). To analyze only those
     * objects that are created or changed after you create the job and before the
     * job's first scheduled run, set this value to false.</p> <p>If you configure the
     * job to run only once, don't specify a value for this property.</p>
     */
    inline bool GetInitialRun() const{ return m_initialRun; }

    /**
     * <p>For a recurring job, specifies whether to analyze all existing, eligible
     * objects immediately after the job is created (true). To analyze only those
     * objects that are created or changed after you create the job and before the
     * job's first scheduled run, set this value to false.</p> <p>If you configure the
     * job to run only once, don't specify a value for this property.</p>
     */
    inline bool InitialRunHasBeenSet() const { return m_initialRunHasBeenSet; }

    /**
     * <p>For a recurring job, specifies whether to analyze all existing, eligible
     * objects immediately after the job is created (true). To analyze only those
     * objects that are created or changed after you create the job and before the
     * job's first scheduled run, set this value to false.</p> <p>If you configure the
     * job to run only once, don't specify a value for this property.</p>
     */
    inline void SetInitialRun(bool value) { m_initialRunHasBeenSet = true; m_initialRun = value; }

    /**
     * <p>For a recurring job, specifies whether to analyze all existing, eligible
     * objects immediately after the job is created (true). To analyze only those
     * objects that are created or changed after you create the job and before the
     * job's first scheduled run, set this value to false.</p> <p>If you configure the
     * job to run only once, don't specify a value for this property.</p>
     */
    inline CreateClassificationJobRequest& WithInitialRun(bool value) { SetInitialRun(value); return *this;}


    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline CreateClassificationJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to define the recurrence pattern for the job.</p></li></ul>
     */
    inline CreateClassificationJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const{ return m_managedDataIdentifierIds; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline bool ManagedDataIdentifierIdsHasBeenSet() const { return m_managedDataIdentifierIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline void SetManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = value; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline void SetManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline CreateClassificationJobRequest& WithManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetManagedDataIdentifierIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline CreateClassificationJobRequest& WithManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetManagedDataIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline CreateClassificationJobRequest& AddManagedDataIdentifierIds(const Aws::String& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline CreateClassificationJobRequest& AddManagedDataIdentifierIds(Aws::String&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline CreateClassificationJobRequest& AddManagedDataIdentifierIds(const char* value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }


    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline const ManagedDataIdentifierSelector& GetManagedDataIdentifierSelector() const{ return m_managedDataIdentifierSelector; }

    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline bool ManagedDataIdentifierSelectorHasBeenSet() const { return m_managedDataIdentifierSelectorHasBeenSet; }

    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline void SetManagedDataIdentifierSelector(const ManagedDataIdentifierSelector& value) { m_managedDataIdentifierSelectorHasBeenSet = true; m_managedDataIdentifierSelector = value; }

    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline void SetManagedDataIdentifierSelector(ManagedDataIdentifierSelector&& value) { m_managedDataIdentifierSelectorHasBeenSet = true; m_managedDataIdentifierSelector = std::move(value); }

    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline CreateClassificationJobRequest& WithManagedDataIdentifierSelector(const ManagedDataIdentifierSelector& value) { SetManagedDataIdentifierSelector(value); return *this;}

    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all the
     * managed data identifiers that Amazon Macie provides. If you specify this value,
     * don't specify any values for the managedDataIdentifierIds property.</p></li>
     * <li><p>EXCLUDE - Use all the managed data identifiers that Macie provides except
     * the managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. If you specify this value, specify at least
     * one custom data identifier for the job (customDataIdentifierIds) and don't
     * specify any values for the managedDataIdentifierIds property.</p></li></ul>
     * <p>If you don't specify a value for this property, the job uses all managed data
     * identifiers. If you don't specify a value for this property or you specify ALL
     * or EXCLUDE for a recurring job, the job also uses new managed data identifiers
     * as they are released.</p>
     */
    inline CreateClassificationJobRequest& WithManagedDataIdentifierSelector(ManagedDataIdentifierSelector&& value) { SetManagedDataIdentifierSelector(std::move(value)); return *this;}


    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline CreateClassificationJobRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline const S3JobDefinition& GetS3JobDefinition() const{ return m_s3JobDefinition; }

    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline bool S3JobDefinitionHasBeenSet() const { return m_s3JobDefinitionHasBeenSet; }

    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline void SetS3JobDefinition(const S3JobDefinition& value) { m_s3JobDefinitionHasBeenSet = true; m_s3JobDefinition = value; }

    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline void SetS3JobDefinition(S3JobDefinition&& value) { m_s3JobDefinitionHasBeenSet = true; m_s3JobDefinition = std::move(value); }

    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline CreateClassificationJobRequest& WithS3JobDefinition(const S3JobDefinition& value) { SetS3JobDefinition(value); return *this;}

    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline CreateClassificationJobRequest& WithS3JobDefinition(S3JobDefinition&& value) { SetS3JobDefinition(std::move(value)); return *this;}


    /**
     * <p>The sampling depth, as a percentage, for the job to apply when processing
     * objects. This value determines the percentage of eligible objects that the job
     * analyzes. If this value is less than 100, Amazon Macie selects the objects to
     * analyze at random, up to the specified percentage, and analyzes all the data in
     * those objects.</p>
     */
    inline int GetSamplingPercentage() const{ return m_samplingPercentage; }

    /**
     * <p>The sampling depth, as a percentage, for the job to apply when processing
     * objects. This value determines the percentage of eligible objects that the job
     * analyzes. If this value is less than 100, Amazon Macie selects the objects to
     * analyze at random, up to the specified percentage, and analyzes all the data in
     * those objects.</p>
     */
    inline bool SamplingPercentageHasBeenSet() const { return m_samplingPercentageHasBeenSet; }

    /**
     * <p>The sampling depth, as a percentage, for the job to apply when processing
     * objects. This value determines the percentage of eligible objects that the job
     * analyzes. If this value is less than 100, Amazon Macie selects the objects to
     * analyze at random, up to the specified percentage, and analyzes all the data in
     * those objects.</p>
     */
    inline void SetSamplingPercentage(int value) { m_samplingPercentageHasBeenSet = true; m_samplingPercentage = value; }

    /**
     * <p>The sampling depth, as a percentage, for the job to apply when processing
     * objects. This value determines the percentage of eligible objects that the job
     * analyzes. If this value is less than 100, Amazon Macie selects the objects to
     * analyze at random, up to the specified percentage, and analyzes all the data in
     * those objects.</p>
     */
    inline CreateClassificationJobRequest& WithSamplingPercentage(int value) { SetSamplingPercentage(value); return *this;}


    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline const JobScheduleFrequency& GetScheduleFrequency() const{ return m_scheduleFrequency; }

    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }

    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline void SetScheduleFrequency(const JobScheduleFrequency& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = value; }

    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline void SetScheduleFrequency(JobScheduleFrequency&& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = std::move(value); }

    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline CreateClassificationJobRequest& WithScheduleFrequency(const JobScheduleFrequency& value) { SetScheduleFrequency(value); return *this;}

    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline CreateClassificationJobRequest& WithScheduleFrequency(JobScheduleFrequency&& value) { SetScheduleFrequency(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateClassificationJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowListIds;
    bool m_allowListIdsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDataIdentifierIds;
    bool m_customDataIdentifierIdsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_initialRun;
    bool m_initialRunHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;
    bool m_managedDataIdentifierIdsHasBeenSet = false;

    ManagedDataIdentifierSelector m_managedDataIdentifierSelector;
    bool m_managedDataIdentifierSelectorHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3JobDefinition m_s3JobDefinition;
    bool m_s3JobDefinitionHasBeenSet = false;

    int m_samplingPercentage;
    bool m_samplingPercentageHasBeenSet = false;

    JobScheduleFrequency m_scheduleFrequency;
    bool m_scheduleFrequencyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
