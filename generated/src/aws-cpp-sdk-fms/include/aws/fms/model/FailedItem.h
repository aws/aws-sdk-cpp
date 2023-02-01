/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/FailedItemReason.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of a resource that failed when trying to update it's association to a
   * resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/FailedItem">AWS API
   * Reference</a></p>
   */
  class FailedItem
  {
  public:
    AWS_FMS_API FailedItem();
    AWS_FMS_API FailedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FailedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline FailedItem& WithURI(const Aws::String& value) { SetURI(value); return *this;}

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline FailedItem& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}

    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline FailedItem& WithURI(const char* value) { SetURI(value); return *this;}


    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline const FailedItemReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline void SetReason(const FailedItemReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline void SetReason(FailedItemReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline FailedItem& WithReason(const FailedItemReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline FailedItem& WithReason(FailedItemReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    FailedItemReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
