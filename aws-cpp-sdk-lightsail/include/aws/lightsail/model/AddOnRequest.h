/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/AddOnType.h>
#include <aws/lightsail/model/AutoSnapshotAddOnRequest.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a request to enable, modify, or disable an add-on for an Amazon
   * Lightsail resource.</p>  <p>An additional cost may be associated with
   * enabling add-ons. For more information, see the <a
   * href="https://aws.amazon.com/lightsail/pricing/">Lightsail pricing page</a>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AddOnRequest">AWS
   * API Reference</a></p>
   */
  class AddOnRequest
  {
  public:
    AWS_LIGHTSAIL_API AddOnRequest();
    AWS_LIGHTSAIL_API AddOnRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AddOnRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The add-on type.</p>
     */
    inline const AddOnType& GetAddOnType() const{ return m_addOnType; }

    /**
     * <p>The add-on type.</p>
     */
    inline bool AddOnTypeHasBeenSet() const { return m_addOnTypeHasBeenSet; }

    /**
     * <p>The add-on type.</p>
     */
    inline void SetAddOnType(const AddOnType& value) { m_addOnTypeHasBeenSet = true; m_addOnType = value; }

    /**
     * <p>The add-on type.</p>
     */
    inline void SetAddOnType(AddOnType&& value) { m_addOnTypeHasBeenSet = true; m_addOnType = std::move(value); }

    /**
     * <p>The add-on type.</p>
     */
    inline AddOnRequest& WithAddOnType(const AddOnType& value) { SetAddOnType(value); return *this;}

    /**
     * <p>The add-on type.</p>
     */
    inline AddOnRequest& WithAddOnType(AddOnType&& value) { SetAddOnType(std::move(value)); return *this;}


    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline const AutoSnapshotAddOnRequest& GetAutoSnapshotAddOnRequest() const{ return m_autoSnapshotAddOnRequest; }

    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline bool AutoSnapshotAddOnRequestHasBeenSet() const { return m_autoSnapshotAddOnRequestHasBeenSet; }

    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline void SetAutoSnapshotAddOnRequest(const AutoSnapshotAddOnRequest& value) { m_autoSnapshotAddOnRequestHasBeenSet = true; m_autoSnapshotAddOnRequest = value; }

    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline void SetAutoSnapshotAddOnRequest(AutoSnapshotAddOnRequest&& value) { m_autoSnapshotAddOnRequestHasBeenSet = true; m_autoSnapshotAddOnRequest = std::move(value); }

    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline AddOnRequest& WithAutoSnapshotAddOnRequest(const AutoSnapshotAddOnRequest& value) { SetAutoSnapshotAddOnRequest(value); return *this;}

    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline AddOnRequest& WithAutoSnapshotAddOnRequest(AutoSnapshotAddOnRequest&& value) { SetAutoSnapshotAddOnRequest(std::move(value)); return *this;}

  private:

    AddOnType m_addOnType;
    bool m_addOnTypeHasBeenSet = false;

    AutoSnapshotAddOnRequest m_autoSnapshotAddOnRequest;
    bool m_autoSnapshotAddOnRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
