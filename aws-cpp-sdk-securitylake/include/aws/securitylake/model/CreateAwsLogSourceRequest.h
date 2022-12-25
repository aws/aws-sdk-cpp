/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateAwsLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateAwsLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAwsLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetEnableAllDimensions() const{ return m_enableAllDimensions; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline bool EnableAllDimensionsHasBeenSet() const { return m_enableAllDimensionsHasBeenSet; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline void SetEnableAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions = value; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline void SetEnableAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions = std::move(value); }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetEnableAllDimensions(value); return *this;}

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetEnableAllDimensions(std::move(value)); return *this;}

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(key, value); return *this; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Enables specific sources in all Regions and source types.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableAllDimensions(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_enableAllDimensionsHasBeenSet = true; m_enableAllDimensions.emplace(key, value); return *this; }


    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableSingleDimension() const{ return m_enableSingleDimension; }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline bool EnableSingleDimensionHasBeenSet() const { return m_enableSingleDimensionHasBeenSet; }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline void SetEnableSingleDimension(const Aws::Vector<Aws::String>& value) { m_enableSingleDimensionHasBeenSet = true; m_enableSingleDimension = value; }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline void SetEnableSingleDimension(Aws::Vector<Aws::String>&& value) { m_enableSingleDimensionHasBeenSet = true; m_enableSingleDimension = std::move(value); }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableSingleDimension(const Aws::Vector<Aws::String>& value) { SetEnableSingleDimension(value); return *this;}

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableSingleDimension(Aws::Vector<Aws::String>&& value) { SetEnableSingleDimension(std::move(value)); return *this;}

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableSingleDimension(const Aws::String& value) { m_enableSingleDimensionHasBeenSet = true; m_enableSingleDimension.push_back(value); return *this; }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableSingleDimension(Aws::String&& value) { m_enableSingleDimensionHasBeenSet = true; m_enableSingleDimension.push_back(std::move(value)); return *this; }

    /**
     * <p>Enables all sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableSingleDimension(const char* value) { m_enableSingleDimensionHasBeenSet = true; m_enableSingleDimension.push_back(value); return *this; }


    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetEnableTwoDimensions() const{ return m_enableTwoDimensions; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline bool EnableTwoDimensionsHasBeenSet() const { return m_enableTwoDimensionsHasBeenSet; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline void SetEnableTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions = value; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline void SetEnableTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions = std::move(value); }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetEnableTwoDimensions(value); return *this;}

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& WithEnableTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetEnableTwoDimensions(std::move(value)); return *this;}

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(key, value); return *this; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(const char* key, Aws::Vector<Aws::String>&& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Enables specific service sources in specific accounts or Regions.</p>
     */
    inline CreateAwsLogSourceRequest& AddEnableTwoDimensions(const char* key, const Aws::Vector<Aws::String>& value) { m_enableTwoDimensionsHasBeenSet = true; m_enableTwoDimensions.emplace(key, value); return *this; }


    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline const Aws::Vector<Dimension>& GetInputOrder() const{ return m_inputOrder; }

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline bool InputOrderHasBeenSet() const { return m_inputOrderHasBeenSet; }

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline void SetInputOrder(const Aws::Vector<Dimension>& value) { m_inputOrderHasBeenSet = true; m_inputOrder = value; }

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline void SetInputOrder(Aws::Vector<Dimension>&& value) { m_inputOrderHasBeenSet = true; m_inputOrder = std::move(value); }

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline CreateAwsLogSourceRequest& WithInputOrder(const Aws::Vector<Dimension>& value) { SetInputOrder(value); return *this;}

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline CreateAwsLogSourceRequest& WithInputOrder(Aws::Vector<Dimension>&& value) { SetInputOrder(std::move(value)); return *this;}

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline CreateAwsLogSourceRequest& AddInputOrder(const Dimension& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(value); return *this; }

    /**
     * <p>Specifies the input order to enable dimensions in Security Lake, namely
     * region, source type, and member account.</p>
     */
    inline CreateAwsLogSourceRequest& AddInputOrder(Dimension&& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_enableAllDimensions;
    bool m_enableAllDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableSingleDimension;
    bool m_enableSingleDimensionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_enableTwoDimensions;
    bool m_enableTwoDimensionsHasBeenSet = false;

    Aws::Vector<Dimension> m_inputOrder;
    bool m_inputOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
