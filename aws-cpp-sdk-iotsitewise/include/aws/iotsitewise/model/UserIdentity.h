/**
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
   * <p>Contains information for a user identity in an access policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UserIdentity">AWS
   * API Reference</a></p>
   */
  class UserIdentity
  {
  public:
    AWS_IOTSITEWISE_API UserIdentity();
    AWS_IOTSITEWISE_API UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline UserIdentity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline UserIdentity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center ID of the user.</p>
     */
    inline UserIdentity& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
