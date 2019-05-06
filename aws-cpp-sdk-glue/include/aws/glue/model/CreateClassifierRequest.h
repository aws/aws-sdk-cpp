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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/CreateGrokClassifierRequest.h>
#include <aws/glue/model/CreateXMLClassifierRequest.h>
#include <aws/glue/model/CreateJsonClassifierRequest.h>
#include <aws/glue/model/CreateCsvClassifierRequest.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreateClassifierRequest : public GlueRequest
  {
  public:
    CreateClassifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClassifier"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateGrokClassifierRequest& GetGrokClassifier() const{ return m_grokClassifier; }

    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }

    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetGrokClassifier(const CreateGrokClassifierRequest& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }

    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetGrokClassifier(CreateGrokClassifierRequest&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }

    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithGrokClassifier(const CreateGrokClassifierRequest& value) { SetGrokClassifier(value); return *this;}

    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithGrokClassifier(CreateGrokClassifierRequest&& value) { SetGrokClassifier(std::move(value)); return *this;}


    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateXMLClassifierRequest& GetXMLClassifier() const{ return m_xMLClassifier; }

    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }

    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetXMLClassifier(const CreateXMLClassifierRequest& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = value; }

    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetXMLClassifier(CreateXMLClassifierRequest&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::move(value); }

    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithXMLClassifier(const CreateXMLClassifierRequest& value) { SetXMLClassifier(value); return *this;}

    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithXMLClassifier(CreateXMLClassifierRequest&& value) { SetXMLClassifier(std::move(value)); return *this;}


    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateJsonClassifierRequest& GetJsonClassifier() const{ return m_jsonClassifier; }

    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }

    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetJsonClassifier(const CreateJsonClassifierRequest& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = value; }

    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetJsonClassifier(CreateJsonClassifierRequest&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::move(value); }

    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithJsonClassifier(const CreateJsonClassifierRequest& value) { SetJsonClassifier(value); return *this;}

    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithJsonClassifier(CreateJsonClassifierRequest&& value) { SetJsonClassifier(std::move(value)); return *this;}


    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateCsvClassifierRequest& GetCsvClassifier() const{ return m_csvClassifier; }

    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }

    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetCsvClassifier(const CreateCsvClassifierRequest& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = value; }

    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline void SetCsvClassifier(CreateCsvClassifierRequest&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::move(value); }

    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithCsvClassifier(const CreateCsvClassifierRequest& value) { SetCsvClassifier(value); return *this;}

    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline CreateClassifierRequest& WithCsvClassifier(CreateCsvClassifierRequest&& value) { SetCsvClassifier(std::move(value)); return *this;}

  private:

    CreateGrokClassifierRequest m_grokClassifier;
    bool m_grokClassifierHasBeenSet;

    CreateXMLClassifierRequest m_xMLClassifier;
    bool m_xMLClassifierHasBeenSet;

    CreateJsonClassifierRequest m_jsonClassifier;
    bool m_jsonClassifierHasBeenSet;

    CreateCsvClassifierRequest m_csvClassifier;
    bool m_csvClassifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
