/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportErrorType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>VectorEnrichmentJob export error details in response from
   * GetVectorEnrichmentJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobExportErrorDetails">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobExportErrorDetails
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobExportErrorDetails();
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobExportErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobExportErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline VectorEnrichmentJobExportErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline VectorEnrichmentJobExportErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message providing details about the errors generated during the Vector
     * Enrichment job.</p>
     */
    inline VectorEnrichmentJobExportErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const VectorEnrichmentJobExportErrorType& GetType() const{ return m_type; }

    /**
     * <p/>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetType(const VectorEnrichmentJobExportErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p/>
     */
    inline void SetType(VectorEnrichmentJobExportErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p/>
     */
    inline VectorEnrichmentJobExportErrorDetails& WithType(const VectorEnrichmentJobExportErrorType& value) { SetType(value); return *this;}

    /**
     * <p/>
     */
    inline VectorEnrichmentJobExportErrorDetails& WithType(VectorEnrichmentJobExportErrorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    VectorEnrichmentJobExportErrorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
