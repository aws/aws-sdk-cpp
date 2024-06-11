/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Returns details of the connector that is specified.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedConnector">AWS
   * API Reference</a></p>
   */
  class ListedConnector
  {
  public:
    AWS_TRANSFER_API ListedConnector();
    AWS_TRANSFER_API ListedConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified connector.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListedConnector& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListedConnector& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListedConnector& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline ListedConnector& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline ListedConnector& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline ListedConnector& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the partner's AS2 or SFTP endpoint.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline ListedConnector& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline ListedConnector& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline ListedConnector& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
