/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/EdiType.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class TestParsingRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API TestParsingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestParsing"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline const S3Location& GetInputFile() const{ return m_inputFile; }

    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }

    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline void SetInputFile(const S3Location& value) { m_inputFileHasBeenSet = true; m_inputFile = value; }

    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline void SetInputFile(S3Location&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::move(value); }

    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline TestParsingRequest& WithInputFile(const S3Location& value) { SetInputFile(value); return *this;}

    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline TestParsingRequest& WithInputFile(S3Location&& value) { SetInputFile(std::move(value)); return *this;}


    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TestParsingRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TestParsingRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline bool EdiTypeHasBeenSet() const { return m_ediTypeHasBeenSet; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(const EdiType& value) { m_ediTypeHasBeenSet = true; m_ediType = value; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(EdiType&& value) { m_ediTypeHasBeenSet = true; m_ediType = std::move(value); }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline TestParsingRequest& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline TestParsingRequest& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}

  private:

    S3Location m_inputFile;
    bool m_inputFileHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    EdiType m_ediType;
    bool m_ediTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
