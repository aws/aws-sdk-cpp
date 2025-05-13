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
    AWS_B2BI_API StartTransformerJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTransformerJob"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the location of the input file for the transformation. The location
     * consists of an Amazon S3 bucket and prefix.</p>
     */
    inline const S3Location& GetInputFile() const { return m_inputFile; }
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }
    template<typename InputFileT = S3Location>
    void SetInputFile(InputFileT&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::forward<InputFileT>(value); }
    template<typename InputFileT = S3Location>
    StartTransformerJobRequest& WithInputFile(InputFileT&& value) { SetInputFile(std::forward<InputFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of the output file for the transformation. The
     * location consists of an Amazon S3 bucket and prefix.</p>
     */
    inline const S3Location& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = S3Location>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = S3Location>
    StartTransformerJobRequest& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const { return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    template<typename TransformerIdT = Aws::String>
    void SetTransformerId(TransformerIdT&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::forward<TransformerIdT>(value); }
    template<typename TransformerIdT = Aws::String>
    StartTransformerJobRequest& WithTransformerId(TransformerIdT&& value) { SetTransformerId(std::forward<TransformerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartTransformerJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    S3Location m_inputFile;
    bool m_inputFileHasBeenSet = false;

    S3Location m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
