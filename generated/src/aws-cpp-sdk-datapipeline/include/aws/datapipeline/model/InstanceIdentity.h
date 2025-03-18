/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p><p>Identity information for the EC2 instance that is hosting the task runner.
   * You can get this value by calling a metadata URI from the EC2 instance. For more
   * information, see <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
   * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
   * this value proves that your task runner is running on an EC2 instance, and
   * ensures the proper AWS Data Pipeline service charges are applied to your
   * pipeline.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/InstanceIdentity">AWS
   * API Reference</a></p>
   */
  class InstanceIdentity
  {
  public:
    AWS_DATAPIPELINE_API InstanceIdentity() = default;
    AWS_DATAPIPELINE_API InstanceIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API InstanceIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline const Aws::String& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Aws::String>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::String>
    InstanceIdentity& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    InstanceIdentity& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
