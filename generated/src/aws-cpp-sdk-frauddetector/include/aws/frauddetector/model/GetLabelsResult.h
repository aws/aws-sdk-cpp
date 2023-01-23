/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Label.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{
  class GetLabelsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetLabelsResult();
    AWS_FRAUDDETECTOR_API GetLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of labels.</p>
     */
    inline const Aws::Vector<Label>& GetLabels() const{ return m_labels; }

    /**
     * <p>An array of labels.</p>
     */
    inline void SetLabels(const Aws::Vector<Label>& value) { m_labels = value; }

    /**
     * <p>An array of labels.</p>
     */
    inline void SetLabels(Aws::Vector<Label>&& value) { m_labels = std::move(value); }

    /**
     * <p>An array of labels.</p>
     */
    inline GetLabelsResult& WithLabels(const Aws::Vector<Label>& value) { SetLabels(value); return *this;}

    /**
     * <p>An array of labels.</p>
     */
    inline GetLabelsResult& WithLabels(Aws::Vector<Label>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>An array of labels.</p>
     */
    inline GetLabelsResult& AddLabels(const Label& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>An array of labels.</p>
     */
    inline GetLabelsResult& AddLabels(Label&& value) { m_labels.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token.</p>
     */
    inline GetLabelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetLabelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetLabelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Label> m_labels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
