/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API DisassociateDataShareConsumerRequest : public RedshiftRequest
  {
  public:
    DisassociateDataShareConsumerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDataShareConsumer"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline DisassociateDataShareConsumerRequest& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline DisassociateDataShareConsumerRequest& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association for.
     * </p>
     */
    inline DisassociateDataShareConsumerRequest& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}


    /**
     * <p>A value that specifies whether association for the datashare is removed from
     * the entire account.</p>
     */
    inline bool GetDisassociateEntireAccount() const{ return m_disassociateEntireAccount; }

    /**
     * <p>A value that specifies whether association for the datashare is removed from
     * the entire account.</p>
     */
    inline bool DisassociateEntireAccountHasBeenSet() const { return m_disassociateEntireAccountHasBeenSet; }

    /**
     * <p>A value that specifies whether association for the datashare is removed from
     * the entire account.</p>
     */
    inline void SetDisassociateEntireAccount(bool value) { m_disassociateEntireAccountHasBeenSet = true; m_disassociateEntireAccount = value; }

    /**
     * <p>A value that specifies whether association for the datashare is removed from
     * the entire account.</p>
     */
    inline DisassociateDataShareConsumerRequest& WithDisassociateEntireAccount(bool value) { SetDisassociateEntireAccount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline const Aws::String& GetConsumerArn() const{ return m_consumerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline void SetConsumerArn(const Aws::String& value) { m_consumerArnHasBeenSet = true; m_consumerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline void SetConsumerArn(Aws::String&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline void SetConsumerArn(const char* value) { m_consumerArnHasBeenSet = true; m_consumerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline DisassociateDataShareConsumerRequest& WithConsumerArn(const Aws::String& value) { SetConsumerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline DisassociateDataShareConsumerRequest& WithConsumerArn(Aws::String&& value) { SetConsumerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that association for the
     * datashare is removed from.</p>
     */
    inline DisassociateDataShareConsumerRequest& WithConsumerArn(const char* value) { SetConsumerArn(value); return *this;}

  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet;

    bool m_disassociateEntireAccount;
    bool m_disassociateEntireAccountHasBeenSet;

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
