/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class CreateBotVersionRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CreateBotVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBotVersion"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the bot that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBotVersionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version of the
     * bot. If you specify a checksum and the <code>$LATEST</code> version of the bot
     * has a different checksum, a <code>PreconditionFailedException</code> exception
     * is returned and Amazon Lex doesn't publish a new version. If you don't specify a
     * checksum, Amazon Lex publishes the <code>$LATEST</code> version.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    CreateBotVersionRequest& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
