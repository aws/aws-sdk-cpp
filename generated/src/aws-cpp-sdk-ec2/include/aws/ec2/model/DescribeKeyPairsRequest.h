/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeKeyPairsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeKeyPairsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeyPairs"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key-pair-id</code> - The ID of the key
     * pair.</p> </li> <li> <p> <code>fingerprint</code> - The fingerprint of the key
     * pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key pair.</p>
     * </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to the resource.
     * Use this filter to find all resources assigned a tag with a specific key,
     * regardless of the tag value.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; -
     * The key/value combination of a tag assigned to the resource. Use the tag key in
     * the filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyNames() const{ return m_keyNames; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline bool KeyNamesHasBeenSet() const { return m_keyNamesHasBeenSet; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline void SetKeyNames(const Aws::Vector<Aws::String>& value) { m_keyNamesHasBeenSet = true; m_keyNames = value; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline void SetKeyNames(Aws::Vector<Aws::String>&& value) { m_keyNamesHasBeenSet = true; m_keyNames = std::move(value); }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyNames(const Aws::Vector<Aws::String>& value) { SetKeyNames(value); return *this;}

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyNames(Aws::Vector<Aws::String>&& value) { SetKeyNames(std::move(value)); return *this;}

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(const Aws::String& value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(value); return *this; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(Aws::String&& value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all of your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(const char* value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(value); return *this; }


    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPairIds() const{ return m_keyPairIds; }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline bool KeyPairIdsHasBeenSet() const { return m_keyPairIdsHasBeenSet; }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline void SetKeyPairIds(const Aws::Vector<Aws::String>& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = value; }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline void SetKeyPairIds(Aws::Vector<Aws::String>&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = std::move(value); }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyPairIds(const Aws::Vector<Aws::String>& value) { SetKeyPairIds(value); return *this;}

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyPairIds(Aws::Vector<Aws::String>&& value) { SetKeyPairIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyPairIds(const Aws::String& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyPairIds(Aws::String&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyPairIds(const char* value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds.push_back(value); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeKeyPairsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>If <code>true</code>, the public key material is included in the
     * response.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetIncludePublicKey() const{ return m_includePublicKey; }

    /**
     * <p>If <code>true</code>, the public key material is included in the
     * response.</p> <p>Default: <code>false</code> </p>
     */
    inline bool IncludePublicKeyHasBeenSet() const { return m_includePublicKeyHasBeenSet; }

    /**
     * <p>If <code>true</code>, the public key material is included in the
     * response.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetIncludePublicKey(bool value) { m_includePublicKeyHasBeenSet = true; m_includePublicKey = value; }

    /**
     * <p>If <code>true</code>, the public key material is included in the
     * response.</p> <p>Default: <code>false</code> </p>
     */
    inline DescribeKeyPairsRequest& WithIncludePublicKey(bool value) { SetIncludePublicKey(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_keyNames;
    bool m_keyNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_keyPairIds;
    bool m_keyPairIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_includePublicKey;
    bool m_includePublicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
