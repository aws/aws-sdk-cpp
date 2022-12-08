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
  class DeleteAwsLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteAwsLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAwsLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetDisableAllDimensions() const{ return m_disableAllDimensions; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline bool DisableAllDimensionsHasBeenSet() const { return m_disableAllDimensionsHasBeenSet; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline void SetDisableAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions = value; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline void SetDisableAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions = std::move(value); }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableAllDimensions(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetDisableAllDimensions(value); return *this;}

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableAllDimensions(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetDisableAllDimensions(std::move(value)); return *this;}

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(key, value); return *this; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Removes the specific Amazon Web Services sources from all Regions and source
     * types.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableAllDimensions(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_disableAllDimensionsHasBeenSet = true; m_disableAllDimensions.emplace(key, value); return *this; }


    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisableSingleDimension() const{ return m_disableSingleDimension; }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline bool DisableSingleDimensionHasBeenSet() const { return m_disableSingleDimensionHasBeenSet; }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline void SetDisableSingleDimension(const Aws::Vector<Aws::String>& value) { m_disableSingleDimensionHasBeenSet = true; m_disableSingleDimension = value; }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline void SetDisableSingleDimension(Aws::Vector<Aws::String>&& value) { m_disableSingleDimensionHasBeenSet = true; m_disableSingleDimension = std::move(value); }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableSingleDimension(const Aws::Vector<Aws::String>& value) { SetDisableSingleDimension(value); return *this;}

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableSingleDimension(Aws::Vector<Aws::String>&& value) { SetDisableSingleDimension(std::move(value)); return *this;}

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableSingleDimension(const Aws::String& value) { m_disableSingleDimensionHasBeenSet = true; m_disableSingleDimension.push_back(value); return *this; }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableSingleDimension(Aws::String&& value) { m_disableSingleDimensionHasBeenSet = true; m_disableSingleDimension.push_back(std::move(value)); return *this; }

    /**
     * <p>Removes all Amazon Web Services sources from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableSingleDimension(const char* value) { m_disableSingleDimensionHasBeenSet = true; m_disableSingleDimension.push_back(value); return *this; }


    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDisableTwoDimensions() const{ return m_disableTwoDimensions; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline bool DisableTwoDimensionsHasBeenSet() const { return m_disableTwoDimensionsHasBeenSet; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline void SetDisableTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions = value; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline void SetDisableTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions = std::move(value); }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableTwoDimensions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetDisableTwoDimensions(value); return *this;}

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& WithDisableTwoDimensions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetDisableTwoDimensions(std::move(value)); return *this;}

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(key, value); return *this; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(const char* key, Aws::Vector<Aws::String>&& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Remove a specific Amazon Web Services source from specific accounts or
     * Regions.</p>
     */
    inline DeleteAwsLogSourceRequest& AddDisableTwoDimensions(const char* key, const Aws::Vector<Aws::String>& value) { m_disableTwoDimensionsHasBeenSet = true; m_disableTwoDimensions.emplace(key, value); return *this; }


    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline const Aws::Vector<Dimension>& GetInputOrder() const{ return m_inputOrder; }

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline bool InputOrderHasBeenSet() const { return m_inputOrderHasBeenSet; }

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline void SetInputOrder(const Aws::Vector<Dimension>& value) { m_inputOrderHasBeenSet = true; m_inputOrder = value; }

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline void SetInputOrder(Aws::Vector<Dimension>&& value) { m_inputOrderHasBeenSet = true; m_inputOrder = std::move(value); }

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline DeleteAwsLogSourceRequest& WithInputOrder(const Aws::Vector<Dimension>& value) { SetInputOrder(value); return *this;}

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline DeleteAwsLogSourceRequest& WithInputOrder(Aws::Vector<Dimension>&& value) { SetInputOrder(std::move(value)); return *this;}

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline DeleteAwsLogSourceRequest& AddInputOrder(const Dimension& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(value); return *this; }

    /**
     * <p>This is a mandatory input. Specifies the input order to disable dimensions in
     * Security Lake, namely Region, source type, and member. </p>
     */
    inline DeleteAwsLogSourceRequest& AddInputOrder(Dimension&& value) { m_inputOrderHasBeenSet = true; m_inputOrder.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_disableAllDimensions;
    bool m_disableAllDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_disableSingleDimension;
    bool m_disableSingleDimensionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_disableTwoDimensions;
    bool m_disableTwoDimensionsHasBeenSet = false;

    Aws::Vector<Dimension> m_inputOrder;
    bool m_inputOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
