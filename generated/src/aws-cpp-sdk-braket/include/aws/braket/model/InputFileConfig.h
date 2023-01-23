/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DataSource.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>A list of parameters that specify the input channels, type of input data, and
   * where it is located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/InputFileConfig">AWS
   * API Reference</a></p>
   */
  class InputFileConfig
  {
  public:
    AWS_BRAKET_API InputFileConfig();
    AWS_BRAKET_API InputFileConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API InputFileConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline InputFileConfig& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline InputFileConfig& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>A named input source that an Amazon Braket job can consume.</p>
     */
    inline InputFileConfig& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The MIME type of the data.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline InputFileConfig& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The MIME type of the data.</p>
     */
    inline InputFileConfig& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the data.</p>
     */
    inline InputFileConfig& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The location of the channel data.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The location of the channel data.</p>
     */
    inline InputFileConfig& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the channel data.</p>
     */
    inline InputFileConfig& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
