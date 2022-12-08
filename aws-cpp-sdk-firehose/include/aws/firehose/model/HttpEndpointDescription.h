/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the HTTP endpoint selected as the destination. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointDescription">AWS
   * API Reference</a></p>
   */
  class HttpEndpointDescription
  {
  public:
    AWS_FIREHOSE_API HttpEndpointDescription();
    AWS_FIREHOSE_API HttpEndpointDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline HttpEndpointDescription& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
