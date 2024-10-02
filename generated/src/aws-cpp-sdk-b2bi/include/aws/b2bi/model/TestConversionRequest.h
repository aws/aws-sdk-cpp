/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/model/ConversionSource.h>
#include <aws/b2bi/model/ConversionTarget.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class TestConversionRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API TestConversionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestConversion"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the source file for an outbound EDI request.</p>
     */
    inline const ConversionSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ConversionSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ConversionSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline TestConversionRequest& WithSource(const ConversionSource& value) { SetSource(value); return *this;}
    inline TestConversionRequest& WithSource(ConversionSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format (X12 is the only currently supported format), and other
     * details for the conversion target.</p>
     */
    inline const ConversionTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const ConversionTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(ConversionTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline TestConversionRequest& WithTarget(const ConversionTarget& value) { SetTarget(value); return *this;}
    inline TestConversionRequest& WithTarget(ConversionTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}
  private:

    ConversionSource m_source;
    bool m_sourceHasBeenSet = false;

    ConversionTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
