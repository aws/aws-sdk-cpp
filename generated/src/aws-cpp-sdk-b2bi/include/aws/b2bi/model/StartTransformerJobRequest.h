/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class StartTransformerJobRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API StartTransformerJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTransformerJob"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline const S3Location& GetInputFile() const{ return m_inputFile; }

    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }

    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline void SetInputFile(const S3Location& value) { m_inputFileHasBeenSet = true; m_inputFile = value; }

    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline void SetInputFile(S3Location&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::move(value); }

    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline StartTransformerJobRequest& WithInputFile(const S3Location& value) { SetInputFile(value); return *this;}

    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline StartTransformerJobRequest& WithInputFile(S3Location&& value) { SetInputFile(std::move(value)); return *this;}


    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline const S3Location& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline void SetOutputLocation(const S3Location& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline void SetOutputLocation(S3Location&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline StartTransformerJobRequest& WithOutputLocation(const S3Location& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline StartTransformerJobRequest& WithOutputLocation(S3Location&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline StartTransformerJobRequest& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline StartTransformerJobRequest& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline StartTransformerJobRequest& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartTransformerJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartTransformerJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartTransformerJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    S3Location m_inputFile;
    bool m_inputFileHasBeenSet = false;

    S3Location m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
