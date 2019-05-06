/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>DescribeTapeArchivesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeArchivesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeTapeArchivesRequest : public StorageGatewayRequest
  {
  public:
    DescribeTapeArchivesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTapeArchives"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const{ return m_tapeARNs; }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline bool TapeARNsHasBeenSet() const { return m_tapeARNsHasBeenSet; }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline void SetTapeARNs(const Aws::Vector<Aws::String>& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = value; }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline void SetTapeARNs(Aws::Vector<Aws::String>&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = std::move(value); }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline DescribeTapeArchivesRequest& WithTapeARNs(const Aws::Vector<Aws::String>& value) { SetTapeARNs(value); return *this;}

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline DescribeTapeArchivesRequest& WithTapeARNs(Aws::Vector<Aws::String>&& value) { SetTapeARNs(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline DescribeTapeArchivesRequest& AddTapeARNs(const Aws::String& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(value); return *this; }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline DescribeTapeArchivesRequest& AddTapeARNs(Aws::String&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe.</p>
     */
    inline DescribeTapeArchivesRequest& AddTapeARNs(const char* value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(value); return *this; }


    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline DescribeTapeArchivesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline DescribeTapeArchivesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin describing
     * virtual tapes.</p>
     */
    inline DescribeTapeArchivesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Specifies that the number of virtual tapes descried be limited to the
     * specified number.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies that the number of virtual tapes descried be limited to the
     * specified number.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies that the number of virtual tapes descried be limited to the
     * specified number.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies that the number of virtual tapes descried be limited to the
     * specified number.</p>
     */
    inline DescribeTapeArchivesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_tapeARNs;
    bool m_tapeARNsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
