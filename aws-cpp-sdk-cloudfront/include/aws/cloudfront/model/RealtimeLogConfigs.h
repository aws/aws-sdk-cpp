/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/RealtimeLogConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A list of real-time log configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/RealtimeLogConfigs">AWS
   * API Reference</a></p>
   */
  class RealtimeLogConfigs
  {
  public:
    AWS_CLOUDFRONT_API RealtimeLogConfigs();
    AWS_CLOUDFRONT_API RealtimeLogConfigs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API RealtimeLogConfigs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The maximum number of real-time log configurations requested.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of real-time log configurations requested.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of real-time log configurations requested.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of real-time log configurations requested.</p>
     */
    inline RealtimeLogConfigs& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline const Aws::Vector<RealtimeLogConfig>& GetItems() const{ return m_items; }

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline void SetItems(const Aws::Vector<RealtimeLogConfig>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline void SetItems(Aws::Vector<RealtimeLogConfig>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline RealtimeLogConfigs& WithItems(const Aws::Vector<RealtimeLogConfig>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline RealtimeLogConfigs& WithItems(Aws::Vector<RealtimeLogConfig>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline RealtimeLogConfigs& AddItems(const RealtimeLogConfig& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Contains the list of real-time log configurations.</p>
     */
    inline RealtimeLogConfigs& AddItems(RealtimeLogConfig&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether there are more real-time log configurations
     * than are contained in this list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more real-time log configurations
     * than are contained in this list.</p>
     */
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }

    /**
     * <p>A flag that indicates whether there are more real-time log configurations
     * than are contained in this list.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more real-time log configurations
     * than are contained in this list.</p>
     */
    inline RealtimeLogConfigs& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline RealtimeLogConfigs& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline RealtimeLogConfigs& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>This parameter indicates where this list of real-time log configurations
     * begins. This list includes real-time log configurations that occur after the
     * marker.</p>
     */
    inline RealtimeLogConfigs& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline RealtimeLogConfigs& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline RealtimeLogConfigs& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing real-time log configurations
     * where you left off. </p>
     */
    inline RealtimeLogConfigs& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::Vector<RealtimeLogConfig> m_items;
    bool m_itemsHasBeenSet = false;

    bool m_isTruncated;
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
