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
   * <p>A request to delete a hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHostedZoneRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DeleteHostedZoneRequest : public Route53Request
  {
  public:
    DeleteHostedZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHostedZone"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline DeleteHostedZoneRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline DeleteHostedZoneRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone you want to delete.</p>
     */
    inline DeleteHostedZoneRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
