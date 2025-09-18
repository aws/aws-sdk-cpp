/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/DeprecationTimeConditionRequest.h>
#include <aws/ec2/model/CreationDateConditionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The criteria that are evaluated to determine which AMIs are discoverable and
   * usable in your account for the specified Amazon Web Services Region.</p> <p>The
   * <code>ImageCriteria</code> can include up to:</p> <ul> <li> <p>10
   * <code>ImageCriterion</code> </p> </li> </ul> <p>Each <code>ImageCriterion</code>
   * can include up to:</p> <ul> <li> <p>200 values for <code>ImageProviders</code>
   * </p> </li> <li> <p>50 values for <code>ImageNames</code> </p> </li> <li> <p>50
   * values for <code>MarketplaceProductCodes</code> </p> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-allowed-amis.html#how-allowed-amis-works">How
   * Allowed AMIs works</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageCriterionRequest">AWS
   * API Reference</a></p>
   */
  class ImageCriterionRequest
  {
  public:
    AWS_EC2_API ImageCriterionRequest() = default;
    AWS_EC2_API ImageCriterionRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageCriterionRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The image providers whose images are allowed.</p> <p>Possible values:</p>
     * <ul> <li> <p> <code>amazon</code>: Allow AMIs created by Amazon or verified
     * providers.</p> </li> <li> <p> <code>aws-marketplace</code>: Allow AMIs created
     * by verified providers in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>aws-backup-vault</code>: Allow AMIs created by Amazon Web Services Backup.
     * </p> </li> <li> <p>12-digit account ID: Allow AMIs created by the specified
     * accounts. One or more account IDs can be specified.</p> </li> <li> <p>
     * <code>none</code>: Allow AMIs created by your own account only. When
     * <code>none</code> is specified, no other values can be specified.</p> </li>
     * </ul> <p>Maximum: 200 values</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageProviders() const { return m_imageProviders; }
    inline bool ImageProvidersHasBeenSet() const { return m_imageProvidersHasBeenSet; }
    template<typename ImageProvidersT = Aws::Vector<Aws::String>>
    void SetImageProviders(ImageProvidersT&& value) { m_imageProvidersHasBeenSet = true; m_imageProviders = std::forward<ImageProvidersT>(value); }
    template<typename ImageProvidersT = Aws::Vector<Aws::String>>
    ImageCriterionRequest& WithImageProviders(ImageProvidersT&& value) { SetImageProviders(std::forward<ImageProvidersT>(value)); return *this;}
    template<typename ImageProvidersT = Aws::String>
    ImageCriterionRequest& AddImageProviders(ImageProvidersT&& value) { m_imageProvidersHasBeenSet = true; m_imageProviders.emplace_back(std::forward<ImageProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Marketplace product codes for allowed images.</p>
     * <p>Length: 1-25 characters</p> <p>Valid characters: Letters (<code>A–Z,
     * a–z</code>) and numbers (<code>0–9</code>)</p> <p>Maximum: 50 values</p>
     */
    inline const Aws::Vector<Aws::String>& GetMarketplaceProductCodes() const { return m_marketplaceProductCodes; }
    inline bool MarketplaceProductCodesHasBeenSet() const { return m_marketplaceProductCodesHasBeenSet; }
    template<typename MarketplaceProductCodesT = Aws::Vector<Aws::String>>
    void SetMarketplaceProductCodes(MarketplaceProductCodesT&& value) { m_marketplaceProductCodesHasBeenSet = true; m_marketplaceProductCodes = std::forward<MarketplaceProductCodesT>(value); }
    template<typename MarketplaceProductCodesT = Aws::Vector<Aws::String>>
    ImageCriterionRequest& WithMarketplaceProductCodes(MarketplaceProductCodesT&& value) { SetMarketplaceProductCodes(std::forward<MarketplaceProductCodesT>(value)); return *this;}
    template<typename MarketplaceProductCodesT = Aws::String>
    ImageCriterionRequest& AddMarketplaceProductCodes(MarketplaceProductCodesT&& value) { m_marketplaceProductCodesHasBeenSet = true; m_marketplaceProductCodes.emplace_back(std::forward<MarketplaceProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of allowed images. Names can include wildcards (<code>?</code> and
     * <code>*</code>).</p> <p>Length: 1–128 characters. With <code>?</code>, the
     * minimum is 3 characters.</p> <p>Valid characters:</p> <ul> <li> <p>Letters:
     * <code>A–Z, a–z</code> </p> </li> <li> <p>Numbers: <code>0–9</code> </p> </li>
     * <li> <p>Special characters: <code>( ) [ ] . / - ' @ _ * ?</code> </p> </li> <li>
     * <p>Spaces</p> </li> </ul> <p>Maximum: 50 values</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageNames() const { return m_imageNames; }
    inline bool ImageNamesHasBeenSet() const { return m_imageNamesHasBeenSet; }
    template<typename ImageNamesT = Aws::Vector<Aws::String>>
    void SetImageNames(ImageNamesT&& value) { m_imageNamesHasBeenSet = true; m_imageNames = std::forward<ImageNamesT>(value); }
    template<typename ImageNamesT = Aws::Vector<Aws::String>>
    ImageCriterionRequest& WithImageNames(ImageNamesT&& value) { SetImageNames(std::forward<ImageNamesT>(value)); return *this;}
    template<typename ImageNamesT = Aws::String>
    ImageCriterionRequest& AddImageNames(ImageNamesT&& value) { m_imageNamesHasBeenSet = true; m_imageNames.emplace_back(std::forward<ImageNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum period since deprecation for allowed images.</p>
     */
    inline const DeprecationTimeConditionRequest& GetDeprecationTimeCondition() const { return m_deprecationTimeCondition; }
    inline bool DeprecationTimeConditionHasBeenSet() const { return m_deprecationTimeConditionHasBeenSet; }
    template<typename DeprecationTimeConditionT = DeprecationTimeConditionRequest>
    void SetDeprecationTimeCondition(DeprecationTimeConditionT&& value) { m_deprecationTimeConditionHasBeenSet = true; m_deprecationTimeCondition = std::forward<DeprecationTimeConditionT>(value); }
    template<typename DeprecationTimeConditionT = DeprecationTimeConditionRequest>
    ImageCriterionRequest& WithDeprecationTimeCondition(DeprecationTimeConditionT&& value) { SetDeprecationTimeCondition(std::forward<DeprecationTimeConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum age for allowed images.</p>
     */
    inline const CreationDateConditionRequest& GetCreationDateCondition() const { return m_creationDateCondition; }
    inline bool CreationDateConditionHasBeenSet() const { return m_creationDateConditionHasBeenSet; }
    template<typename CreationDateConditionT = CreationDateConditionRequest>
    void SetCreationDateCondition(CreationDateConditionT&& value) { m_creationDateConditionHasBeenSet = true; m_creationDateCondition = std::forward<CreationDateConditionT>(value); }
    template<typename CreationDateConditionT = CreationDateConditionRequest>
    ImageCriterionRequest& WithCreationDateCondition(CreationDateConditionT&& value) { SetCreationDateCondition(std::forward<CreationDateConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageProviders;
    bool m_imageProvidersHasBeenSet = false;

    Aws::Vector<Aws::String> m_marketplaceProductCodes;
    bool m_marketplaceProductCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageNames;
    bool m_imageNamesHasBeenSet = false;

    DeprecationTimeConditionRequest m_deprecationTimeCondition;
    bool m_deprecationTimeConditionHasBeenSet = false;

    CreationDateConditionRequest m_creationDateCondition;
    bool m_creationDateConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
