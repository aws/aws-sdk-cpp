﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information for a group identity in an access policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GroupIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API GroupIdentity
  {
  public:
    GroupIdentity();
    GroupIdentity(Aws::Utils::Json::JsonView jsonValue);
    GroupIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
