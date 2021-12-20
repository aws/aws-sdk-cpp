/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PricingPlan.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API CreateGeofenceCollectionRequest : public LocationServiceRequest
  {
  public:
    CreateGeofenceCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGeofenceCollection"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline CreateGeofenceCollectionRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline CreateGeofenceCollectionRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a>. Enter a key ID, key ARN, alias name, or alias ARN.
     * </p>
     */
    inline CreateGeofenceCollectionRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Optionally specifies the pricing plan for the geofence collection. Defaults
     * to <code>RequestBasedUsage</code>.</p> <p>For additional details and
     * restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline const Aws::String& GetPricingPlanDataSource() const{ return m_pricingPlanDataSource; }

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline bool PricingPlanDataSourceHasBeenSet() const { return m_pricingPlanDataSourceHasBeenSet; }

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(const Aws::String& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = value; }

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(Aws::String&& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = std::move(value); }

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(const char* value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource.assign(value); }

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(const Aws::String& value) { SetPricingPlanDataSource(value); return *this;}

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(Aws::String&& value) { SetPricingPlanDataSource(std::move(value)); return *this;}

    /**
     * <p>Specifies the data provider for the geofence collection.</p> <ul> <li>
     * <p>Required value for the following pricing plans: <code>MobileAssetTracking
     * </code>| <code>MobileAssetManagement</code> </p> </li> </ul> <p>For more
     * information about <a href="https://aws.amazon.com/location/data-providers/">Data
     * Providers</a>, and <a href="https://aws.amazon.com/location/pricing/">Pricing
     * plans</a>, see the Amazon Location Service product page.</p>  <p>Amazon
     * Location Service only uses <code>PricingPlanDataSource</code> to calculate
     * billing for your geofence collection. Your data won't be shared with the data
     * provider, and will remain in your AWS account or Region unless you move it.</p>
     *  <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(const char* value) { SetPricingPlanDataSource(value); return *this;}


    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Applies one or more tags to the geofence collection. A tag is a key-value
     * pair helps manage, identify, search, and filter your resources by labelling
     * them.</p> <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul>
     * <li> <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;

    Aws::String m_pricingPlanDataSource;
    bool m_pricingPlanDataSourceHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
