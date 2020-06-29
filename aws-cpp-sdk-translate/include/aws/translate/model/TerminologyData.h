/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/translate/model/TerminologyDataFormat.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The data associated with the custom terminology.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TerminologyData">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API TerminologyData
  {
  public:
    TerminologyData();
    TerminologyData(Aws::Utils::Json::JsonView jsonValue);
    TerminologyData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFile() const{ return m_file; }

    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline void SetFile(const Aws::Utils::CryptoBuffer& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline void SetFile(Aws::Utils::CryptoBuffer&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline TerminologyData& WithFile(const Aws::Utils::CryptoBuffer& value) { SetFile(value); return *this;}

    /**
     * <p>The file containing the custom terminology data. Your version of the AWS SDK
     * performs a Base64-encoding on this field before sending a request to the AWS
     * service. Users of the SDK should not perform Base64-encoding themselves.</p>
     */
    inline TerminologyData& WithFile(Aws::Utils::CryptoBuffer&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline const TerminologyDataFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline void SetFormat(const TerminologyDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline void SetFormat(TerminologyDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline TerminologyData& WithFormat(const TerminologyDataFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The data format of the custom terminology. Either CSV or TMX.</p>
     */
    inline TerminologyData& WithFormat(TerminologyDataFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_file;
    bool m_fileHasBeenSet;

    TerminologyDataFormat m_format;
    bool m_formatHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
