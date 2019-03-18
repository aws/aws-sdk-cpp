/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DATAPIPELINE_API InstanceIdentity
  {
  public:
    InstanceIdentity();
    InstanceIdentity(Aws::Utils::Json::JsonView jsonValue);
    InstanceIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline InstanceIdentity& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline InstanceIdentity& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>A description of an EC2 instance that is generated when the instance is
     * launched and exposed to the instance via the instance metadata service in the
     * form of a JSON representation of an object.</p>
     */
    inline InstanceIdentity& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline InstanceIdentity& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline InstanceIdentity& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>A signature which can be used to verify the accuracy and authenticity of the
     * information provided in the instance identity document.</p>
     */
    inline InstanceIdentity& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
