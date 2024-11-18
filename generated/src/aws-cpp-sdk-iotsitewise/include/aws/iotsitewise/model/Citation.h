/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Reference.h>
#include <aws/iotsitewise/model/Content.h>
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
   * <p>Contains text content to which the SiteWise Assistant refers to, and generate
   * the final response. It also contains information about the source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Citation">AWS
   * API Reference</a></p>
   */
  class Citation
  {
  public:
    AWS_IOTSITEWISE_API Citation();
    AWS_IOTSITEWISE_API Citation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Citation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the data source.</p>
     */
    inline const Reference& GetReference() const{ return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    inline void SetReference(const Reference& value) { m_referenceHasBeenSet = true; m_reference = value; }
    inline void SetReference(Reference&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }
    inline Citation& WithReference(const Reference& value) { SetReference(value); return *this;}
    inline Citation& WithReference(Reference&& value) { SetReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline const Content& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Content& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Content&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline Citation& WithContent(const Content& value) { SetContent(value); return *this;}
    inline Citation& WithContent(Content&& value) { SetContent(std::move(value)); return *this;}
    ///@}
  private:

    Reference m_reference;
    bool m_referenceHasBeenSet = false;

    Content m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
