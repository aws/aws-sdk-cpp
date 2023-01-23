/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeImagesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImages"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExecutableUsers() const{ return m_executableUsers; }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline bool ExecutableUsersHasBeenSet() const { return m_executableUsersHasBeenSet; }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline void SetExecutableUsers(const Aws::Vector<Aws::String>& value) { m_executableUsersHasBeenSet = true; m_executableUsers = value; }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline void SetExecutableUsers(Aws::Vector<Aws::String>&& value) { m_executableUsersHasBeenSet = true; m_executableUsers = std::move(value); }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline DescribeImagesRequest& WithExecutableUsers(const Aws::Vector<Aws::String>& value) { SetExecutableUsers(value); return *this;}

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline DescribeImagesRequest& WithExecutableUsers(Aws::Vector<Aws::String>&& value) { SetExecutableUsers(std::move(value)); return *this;}

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline DescribeImagesRequest& AddExecutableUsers(const Aws::String& value) { m_executableUsersHasBeenSet = true; m_executableUsers.push_back(value); return *this; }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline DescribeImagesRequest& AddExecutableUsers(Aws::String&& value) { m_executableUsersHasBeenSet = true; m_executableUsers.push_back(std::move(value)); return *this; }

    /**
     * <p>Scopes the images by users with explicit launch permissions. Specify an
     * Amazon Web Services account ID, <code>self</code> (the sender of the request),
     * or <code>all</code> (public AMIs).</p> <ul> <li> <p>If you specify an Amazon Web
     * Services account ID that is not your own, only AMIs shared with that specific
     * Amazon Web Services account ID are returned. However, AMIs that are shared with
     * the account’s organization or organizational unit (OU) are not returned.</p>
     * </li> <li> <p>If you specify <code>self</code> or your own Amazon Web Services
     * account ID, AMIs shared with your account are returned. In addition, AMIs that
     * are shared with the organization or OU of which you are member are also
     * returned. </p> </li> <li> <p>If you specify <code>all</code>, all public AMIs
     * are returned.</p> </li> </ul>
     */
    inline DescribeImagesRequest& AddExecutableUsers(const char* value) { m_executableUsersHasBeenSet = true; m_executableUsers.push_back(value); return *this; }


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline DescribeImagesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline DescribeImagesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline DescribeImagesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>architecture</code> - The image
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>block-device-mapping.delete-on-termination</code> - A
     * Boolean value that indicates whether the Amazon EBS volume is deleted on
     * instance termination.</p> </li> <li> <p>
     * <code>block-device-mapping.device-name</code> - The device name specified in the
     * block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for
     * the Amazon EBS volume.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-size</code> - The volume size of the Amazon
     * EBS volume, in GiB.</p> </li> <li> <p>
     * <code>block-device-mapping.volume-type</code> - The volume type of the Amazon
     * EBS volume (<code>io1</code> | <code>io2</code> | <code>gp2</code> |
     * <code>gp3</code> | <code>sc1 </code>| <code>st1</code> |
     * <code>standard</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.encrypted</code> - A Boolean that indicates whether
     * the Amazon EBS volume is encrypted.</p> </li> <li> <p>
     * <code>creation-date</code> - The time when the image was created, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>description</code> - The description of the image (provided
     * during image creation).</p> </li> <li> <p> <code>ena-support</code> - A Boolean
     * that indicates whether enhanced networking with ENA is enabled.</p> </li> <li>
     * <p> <code>hypervisor</code> - The hypervisor type (<code>ovm</code> |
     * <code>xen</code>).</p> </li> <li> <p> <code>image-id</code> - The ID of the
     * image.</p> </li> <li> <p> <code>image-type</code> - The image type
     * (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p> </li>
     * <li> <p> <code>is-public</code> - A Boolean that indicates whether the image is
     * public.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p> </li>
     * <li> <p> <code>manifest-location</code> - The location of the image
     * manifest.</p> </li> <li> <p> <code>name</code> - The name of the AMI (provided
     * during image creation).</p> </li> <li> <p> <code>owner-alias</code> - The owner
     * alias (<code>amazon</code> | <code>aws-marketplace</code>). The valid aliases
     * are defined in an Amazon-maintained list. This is not the Amazon Web Services
     * account alias that can be set using the IAM console. We recommend that you use
     * the <b>Owner</b> request parameter instead of this filter.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner. We
     * recommend that you use the <b>Owner</b> request parameter instead of this
     * filter.</p> </li> <li> <p> <code>platform</code> - The platform. The only
     * supported value is <code>windows</code>.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of the product code
     * (<code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>root-device-name</code> - The device name of
     * the root device volume (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>state</code> - The state of the image (<code>available</code> |
     * <code>pending</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - The message for the state
     * change.</p> </li> <li> <p> <code>sriov-net-support</code> - A value of
     * <code>simple</code> indicates that enhanced networking with the Intel 82599 VF
     * interface is enabled.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>virtualization-type</code> - The virtualization type
     * (<code>paravirtual</code> | <code>hvm</code>).</p> </li> </ul>
     */
    inline DescribeImagesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline void SetImageIds(const Aws::Vector<Aws::String>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline void SetImageIds(Aws::Vector<Aws::String>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline DescribeImagesRequest& WithImageIds(const Aws::Vector<Aws::String>& value) { SetImageIds(value); return *this;}

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline DescribeImagesRequest& WithImageIds(Aws::Vector<Aws::String>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline DescribeImagesRequest& AddImageIds(const Aws::String& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline DescribeImagesRequest& AddImageIds(Aws::String&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The image IDs.</p> <p>Default: Describes all images available to you.</p>
     */
    inline DescribeImagesRequest& AddImageIds(const char* value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }


    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline DescribeImagesRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline DescribeImagesRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline DescribeImagesRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline DescribeImagesRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }

    /**
     * <p>Scopes the results to images with the specified owners. You can specify a
     * combination of Amazon Web Services account IDs, <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>. If you omit this
     * parameter, the results include all images for which you have launch permissions,
     * regardless of ownership.</p>
     */
    inline DescribeImagesRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }


    /**
     * <p>Specifies whether to include deprecated AMIs.</p> <p>Default: No deprecated
     * AMIs are included in the response.</p>  <p>If you are the AMI owner, all
     * deprecated AMIs appear in the response regardless of what you specify for this
     * parameter.</p> 
     */
    inline bool GetIncludeDeprecated() const{ return m_includeDeprecated; }

    /**
     * <p>Specifies whether to include deprecated AMIs.</p> <p>Default: No deprecated
     * AMIs are included in the response.</p>  <p>If you are the AMI owner, all
     * deprecated AMIs appear in the response regardless of what you specify for this
     * parameter.</p> 
     */
    inline bool IncludeDeprecatedHasBeenSet() const { return m_includeDeprecatedHasBeenSet; }

    /**
     * <p>Specifies whether to include deprecated AMIs.</p> <p>Default: No deprecated
     * AMIs are included in the response.</p>  <p>If you are the AMI owner, all
     * deprecated AMIs appear in the response regardless of what you specify for this
     * parameter.</p> 
     */
    inline void SetIncludeDeprecated(bool value) { m_includeDeprecatedHasBeenSet = true; m_includeDeprecated = value; }

    /**
     * <p>Specifies whether to include deprecated AMIs.</p> <p>Default: No deprecated
     * AMIs are included in the response.</p>  <p>If you are the AMI owner, all
     * deprecated AMIs appear in the response regardless of what you specify for this
     * parameter.</p> 
     */
    inline DescribeImagesRequest& WithIncludeDeprecated(bool value) { SetIncludeDeprecated(value); return *this;}


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
    inline DescribeImagesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_executableUsers;
    bool m_executableUsersHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;

    bool m_includeDeprecated;
    bool m_includeDeprecatedHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
