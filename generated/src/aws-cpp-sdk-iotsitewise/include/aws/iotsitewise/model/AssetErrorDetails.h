/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetErrorCode.h>
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
   * <p>Contains error details for the requested associate project asset
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetErrorDetails">AWS
   * API Reference</a></p>
   */
  class AssetErrorDetails
  {
  public:
    AWS_IOTSITEWISE_API AssetErrorDetails();
    AWS_IOTSITEWISE_API AssetErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetErrorDetails& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetErrorDetails& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetErrorDetails& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const AssetErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const AssetErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(AssetErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline AssetErrorDetails& WithCode(const AssetErrorCode& value) { SetCode(value); return *this;}
    inline AssetErrorDetails& WithCode(AssetErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AssetErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AssetErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AssetErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    AssetErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
