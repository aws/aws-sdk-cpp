/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ConversionProperties.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Metadata associated with a Job log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/JobLogEventData">AWS
   * API Reference</a></p>
   */
  class JobLogEventData
  {
  public:
    AWS_DRS_API JobLogEventData();
    AWS_DRS_API JobLogEventData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API JobLogEventData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Properties of a conversion job</p>
     */
    inline const ConversionProperties& GetConversionProperties() const{ return m_conversionProperties; }

    /**
     * <p>Properties of a conversion job</p>
     */
    inline bool ConversionPropertiesHasBeenSet() const { return m_conversionPropertiesHasBeenSet; }

    /**
     * <p>Properties of a conversion job</p>
     */
    inline void SetConversionProperties(const ConversionProperties& value) { m_conversionPropertiesHasBeenSet = true; m_conversionProperties = value; }

    /**
     * <p>Properties of a conversion job</p>
     */
    inline void SetConversionProperties(ConversionProperties&& value) { m_conversionPropertiesHasBeenSet = true; m_conversionProperties = std::move(value); }

    /**
     * <p>Properties of a conversion job</p>
     */
    inline JobLogEventData& WithConversionProperties(const ConversionProperties& value) { SetConversionProperties(value); return *this;}

    /**
     * <p>Properties of a conversion job</p>
     */
    inline JobLogEventData& WithConversionProperties(ConversionProperties&& value) { SetConversionProperties(std::move(value)); return *this;}


    /**
     * <p>The ID of a conversion server.</p>
     */
    inline const Aws::String& GetConversionServerID() const{ return m_conversionServerID; }

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline bool ConversionServerIDHasBeenSet() const { return m_conversionServerIDHasBeenSet; }

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline void SetConversionServerID(const Aws::String& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = value; }

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline void SetConversionServerID(Aws::String&& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = std::move(value); }

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline void SetConversionServerID(const char* value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID.assign(value); }

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline JobLogEventData& WithConversionServerID(const Aws::String& value) { SetConversionServerID(value); return *this;}

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline JobLogEventData& WithConversionServerID(Aws::String&& value) { SetConversionServerID(std::move(value)); return *this;}

    /**
     * <p>The ID of a conversion server.</p>
     */
    inline JobLogEventData& WithConversionServerID(const char* value) { SetConversionServerID(value); return *this;}


    /**
     * <p>A string representing a job error.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }

    /**
     * <p>A string representing a job error.</p>
     */
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }

    /**
     * <p>A string representing a job error.</p>
     */
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }

    /**
     * <p>A string representing a job error.</p>
     */
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }

    /**
     * <p>A string representing a job error.</p>
     */
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }

    /**
     * <p>A string representing a job error.</p>
     */
    inline JobLogEventData& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}

    /**
     * <p>A string representing a job error.</p>
     */
    inline JobLogEventData& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}

    /**
     * <p>A string representing a job error.</p>
     */
    inline JobLogEventData& WithRawError(const char* value) { SetRawError(value); return *this;}


    /**
     * <p>The ID of a Source Server.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline JobLogEventData& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline JobLogEventData& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The ID of a Source Server.</p>
     */
    inline JobLogEventData& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline const Aws::String& GetTargetInstanceID() const{ return m_targetInstanceID; }

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline bool TargetInstanceIDHasBeenSet() const { return m_targetInstanceIDHasBeenSet; }

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline void SetTargetInstanceID(const Aws::String& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = value; }

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline void SetTargetInstanceID(Aws::String&& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = std::move(value); }

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline void SetTargetInstanceID(const char* value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID.assign(value); }

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(const Aws::String& value) { SetTargetInstanceID(value); return *this;}

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(Aws::String&& value) { SetTargetInstanceID(std::move(value)); return *this;}

    /**
     * <p>The ID of a Recovery Instance.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(const char* value) { SetTargetInstanceID(value); return *this;}

  private:

    ConversionProperties m_conversionProperties;
    bool m_conversionPropertiesHasBeenSet = false;

    Aws::String m_conversionServerID;
    bool m_conversionServerIDHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_targetInstanceID;
    bool m_targetInstanceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
