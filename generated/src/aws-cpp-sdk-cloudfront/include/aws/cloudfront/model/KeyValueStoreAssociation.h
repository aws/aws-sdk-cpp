﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The key value store association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyValueStoreAssociation">AWS
   * API Reference</a></p>
   */
  class KeyValueStoreAssociation
  {
  public:
    AWS_CLOUDFRONT_API KeyValueStoreAssociation();
    AWS_CLOUDFRONT_API KeyValueStoreAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyValueStoreAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the key value store association.</p>
     */
    inline const Aws::String& GetKeyValueStoreARN() const{ return m_keyValueStoreARN; }
    inline bool KeyValueStoreARNHasBeenSet() const { return m_keyValueStoreARNHasBeenSet; }
    inline void SetKeyValueStoreARN(const Aws::String& value) { m_keyValueStoreARNHasBeenSet = true; m_keyValueStoreARN = value; }
    inline void SetKeyValueStoreARN(Aws::String&& value) { m_keyValueStoreARNHasBeenSet = true; m_keyValueStoreARN = std::move(value); }
    inline void SetKeyValueStoreARN(const char* value) { m_keyValueStoreARNHasBeenSet = true; m_keyValueStoreARN.assign(value); }
    inline KeyValueStoreAssociation& WithKeyValueStoreARN(const Aws::String& value) { SetKeyValueStoreARN(value); return *this;}
    inline KeyValueStoreAssociation& WithKeyValueStoreARN(Aws::String&& value) { SetKeyValueStoreARN(std::move(value)); return *this;}
    inline KeyValueStoreAssociation& WithKeyValueStoreARN(const char* value) { SetKeyValueStoreARN(value); return *this;}
    ///@}
  private:

    Aws::String m_keyValueStoreARN;
    bool m_keyValueStoreARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
