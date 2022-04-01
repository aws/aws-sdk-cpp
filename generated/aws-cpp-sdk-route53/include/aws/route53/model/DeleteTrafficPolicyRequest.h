﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to delete a specified traffic policy version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteTrafficPolicyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DeleteTrafficPolicyRequest : public Route53Request
  {
  public:
    DeleteTrafficPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrafficPolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
