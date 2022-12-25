/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/ReceiptFilter.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create a new IP address filter. You use IP address
   * filters when you receive email with Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilterRequest">AWS
   * API Reference</a></p>
   */
  class CreateReceiptFilterRequest : public SESRequest
  {
  public:
    AWS_SES_API CreateReceiptFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReceiptFilter"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline const ReceiptFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline void SetFilter(const ReceiptFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline void SetFilter(ReceiptFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline CreateReceiptFilterRequest& WithFilter(const ReceiptFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>A data structure that describes the IP address filter to create, which
     * consists of a name, an IP address range, and whether to allow or block mail from
     * it.</p>
     */
    inline CreateReceiptFilterRequest& WithFilter(ReceiptFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    ReceiptFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
